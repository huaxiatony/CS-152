/*
* Phase 2 Bison Complier
* xhua006 
*
*/


%{
#include <stdio.h>
#include <stdlib.h>
void yyerror(const char* s);
%}

%union{
  char* ident_val;
  int num_val;
 }

%error-verbose
%start prog_start

%token <ident_val> IDENT
%token <num_val> NUMBER
%token FUNCTION BEGIN_PARAMS END_PARAMS BEGIN_LOCALS END_LOCALS BEGIN_BODY END_BODY INTEGER
%token ARRAY OF IF THEN ENDIF ELSE WHILE DO FOREACH IN BEGINLOOP ENDLOOP CONTINUE READ WRITE
%token TRUE FALSE RETURN L_PAREN R_PAREN L_SQUARE_BRACKET R_SQUARE_BRACKET COLON SEMICOLON COMMA

%left SUB ADD MULT DIV MOD EQ NEQ LT GT LTE GTE
%left AND OR ASSIGN
%right NOT

%%  
prog_start: functions {printf("prog_start -> functions\n");}
;

functions:       %empty             
		 {printf("functions -> epsilon\n");}
                 |function functions 
		 {printf("functions -> function functions\n");}
;

function:        FUNCTION ident SEMICOLON BEGIN_PARAMS declarations  END_PARAMS BEGIN_LOCALS declarations  END_LOCALS BEGIN_BODY statements END_BODY
		{printf("function -> FUNCTION ident SEMICOLON BEGIN_PARAMS declarations  END_PARAMS BEGIN_LOCALS declarations  END_LOCALS BEGIN_BODY statements END_BODY\n");}
;

declaration :     identifiers  COLON INTEGER  {printf("declaration  -> identifiers  COLON INTEGER\n");}
                 | identifiers  COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER    {printf("declaration  -> identifiers  COLON ARRAY L_SQUARE_BRACKET NUMBER %d R_SQUARE_BRACKET OF INTEGER;\n");}
;

declarations :    %empty  {printf("declarations  -> epsilon\n");}
                 | declaration  SEMICOLON declarations   {printf("declarations  -> declaration  SEMICOLON declarations \n");}
;

identifiers :     ident
		 {printf("identifiers  -> ident \n");}
                 | ident COMMA identifiers 
		 {printf("identifiers  -> ident COMMA identifiers \n");}

statements:      statement SEMICOLON statements
		 {printf("statements -> statement SEMICOLON statements\n");}
                 | statement SEMICOLON
		 {printf("statements -> statement SEMICOLON\n");}
;

statement:       var ASSIGN expression
		 {printf("statement -> var ASSIGN expression\n");}
		 | READ vars
		 {printf("statement -> READ vars\n");}
		 | WRITE vars
		 {printf("statement -> WRITE vars\n");}
		 | CONTINUE
		 {printf("statement -> CONTINUE\n");}
		 | RETURN expression
		 {printf("statement -> RETURN expression\n");}
                 | IF boolExp THEN statements elseStatement ENDIF
		 {printf("statement -> IF boolExp THEN statements elseStatement ENDIF\n");}		 
                 | WHILE boolExp BEGINLOOP statements ENDLOOP
		 {printf("statement -> WHILE boolExp BEGINLOOP statements ENDLOOP\n");}
                 | DO BEGINLOOP statements ENDLOOP WHILE boolExp
		 {printf("statement -> DO BEGINLOOP statements ENDLOOP WHILE boolExp\n");}
                 | FOREACH ident IN ident BEGINLOOP statements ENDLOOP
		 {printf("statement -> FOREACH ident IN ident BEGINLOOP statements ENDLOOP\n");}
                 
;

elseStatement:   %empty
		 {printf("elseStatement -> epsilon\n");}
                 | ELSE statements
		 {printf("elseStatement -> ELSE statements\n");}
;

var:             ident L_SQUARE_BRACKET expression R_SQUARE_BRACKET
		 {printf("var -> ident  L_SQUARE_BRACKET expression R_SQUARE_BRACKET\n");}
                 | ident
		 {printf("var -> ident \n");}
;

vars:            var
		 {printf("vars -> var\n");}
                 | var COMMA vars
		 {printf("vars -> var COMMA vars\n");}
;

expression:      multExp
		 {printf("expression -> multExp\n");}
                 | multExp ADD expression
		 {printf("expression -> multExp ADD expression\n");}
                 | multExp SUB expression
		 {printf("expression -> multExp SUB expression\n");}
;

expressions:     %empty
		 {printf("expressions -> epsilon\n");}
                 | expression COMMA expressions
		 {printf("expressions -> expression COMMA expressions\n");}
                 | expression
		 {printf("expressions -> expression\n");}
;

multExp:         term
		 {printf("multExp -> term\n");}
                 | term MULT multExp
		 {printf("multExp -> term MULT multExp\n");}
                 | term DIV multExp
		 {printf("multExp -> term DIV multExp\n");}
                 | term MOD multExp
		 {printf("multExp -> term MOD multExp\n");}
;

term:            var	
		 {printf("term -> var\n");}
                 | SUB var
		 {printf("term -> SUB var\n");}
                 | NUMBER
		 {printf("term -> NUMBER \n");}
                 | SUB NUMBER
		 {printf("term -> SUB NUMBER \n");}
                 | L_PAREN expression R_PAREN
		 {printf("term -> L_PAREN expression R_PAREN\n");}
                 | SUB L_PAREN expression R_PAREN
		 {printf("term -> SUB L_PAREN expression R_PAREN\n");}
                 | ident L_PAREN expressions R_PAREN
		 {printf("term -> ident L_PAREN expressions R_PAREN\n");}
;

comp:            LTE
                 {printf("comp -> LTE\n");}
                 | GTE
                 {printf("comp -> GTE\n");}
		 | EQ
		 {printf("comp -> EQ\n");}
                 | NEQ
                 {printf("comp -> NEQ\n");}
                 | LT
                 {printf("comp -> LT\n");}
                 | GT
                 {printf("comp -> GT\n");}
;

boolExp:         raExp 
		 {printf("bool_exp -> relation_exp\n");}
		 | raExp OR boolExp
		 {printf("bool_exp -> relation_and_exp OR bool_exp\n");}
;

raExp:           reExp
		 {printf("relation_and_exp -> relation_exp\n");}
		 | reExp AND raExp
		 {printf("relation_and_exp -> relation_exp AND relation_and_exp\n");}
;

reExp:            NOT rExp1 
		 {printf("relation_exp -> NOT relation_exp1\n");}
		 | rExp1
		 {printf("relation_exp -> relation_exp1\n");}
;

rExp1:           expression comp expression
		 {printf("relation_exp -> expression comp expression\n");}
		 | TRUE
		 {printf("relation_exp -> TRUE\n");}
		 | FALSE
		 {printf("relation_exp -> FALSE\n");}
		 | L_PAREN boolExp R_PAREN
		 {printf("relation_exp -> L_PAREN boolExp R_PAREN\n");}
;
ident:      IDENT {printf("ident -> IDENT %s \n",$1);}
%%		 
void yyerror(const char* s) {
  extern int lineNum;
  extern char* yytext;
  printf("ERROR: %s at  \"%s\" at line %d\n", s, yytext, lineNum);
  exit(1);
}

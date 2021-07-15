%{
  #include "y.tab.h"
  int lineNum = 1, lineCol = 0;
%}

UNDER_CHARACTER [a-zA-Z_]
CHAR [0-9a-zA-Z_]
REGUALR_KEYPAD [0-9a-zA-Z]
WHITESPACE [\t ]
NEWLINE [\n]
DIGIT [0-9]
UNDERSCORE_D [0-9_]
CHARACTER [a-zA-Z]

%%
"=="      return EQ; lineCol += 2;
"<>"      return NEQ; lineCol += 2;
"<"       return LT; ++lineCol;
">"       return GT; ++lineCol;
"<="      return LTE; lineCol += 2;
">="      return GTE; lineCol += 2;
"-"       return SUB; ++lineCol;
"+"       return ADD; ++lineCol;
"*"       return MULT; ++lineCol;
"/"       return DIV; ++lineCol;
"%"       return MOD; ++lineCol;
";"       return SEMICOLON; ++lineCol;
":"       return COLON; ++lineCol;
","       return COMMA; ++lineCol;
"("       return L_PAREN; ++lineCol;
")"       return R_PAREN; ++lineCol;
"["       return L_SQUARE_BRACKET; ++lineCol;
"]"       return R_SQUARE_BRACKET; ++lineCol;
":="      return ASSIGN; lineCol += 2;

"true"         return TRUE; lineCol += yyleng;
"false"        return FALSE; lineCol += yyleng;
"return"       return RETURN; lineCol += yyleng;
"function"     return FUNCTION; lineCol += yyleng;
"beginparams"  return BEGIN_PARAMS; lineCol += yyleng;
"endparams"    return END_PARAMS;  lineCol += yyleng;
"read"         return READ; lineCol += yyleng;
"write"        return WRITE; lineCol += yyleng;
"and"          return AND; lineCol += yyleng;
"or"           return OR; lineCol += yyleng;
"not"          return NOT; lineCol += yyleng;

"of"           return OF; lineCol += yyleng;
"if"           return IF; lineCol += yyleng;
"then"         return THEN; lineCol += yyleng;
"endif"        return ENDIF; lineCol += yyleng;
"else"         return ELSE; lineCol += yyleng;


"while"        return WHILE; lineCol += yyleng;
"do"           return DO; lineCol += yyleng;
"foreach"      return FOREACH; lineCol += yyleng;
"in"           return IN; lineCol += yyleng;

"beginloop"    return BEGINLOOP; lineCol += yyleng;
"endloop"      return ENDLOOP; lineCol += yyleng;
"continue"     return CONTINUE; lineCol += yyleng;


"beginlocals"  return BEGIN_LOCALS; lineCol += yyleng;
"endlocals"    return END_LOCALS; lineCol += yyleng;
"beginbody"    return BEGIN_BODY; lineCol += yyleng;
"endbody"      return END_BODY; lineCol += yyleng;
"integer"      return INTEGER; lineCol += yyleng;
"array"        return ARRAY; lineCol += yyleng;

{WHITESPACE}+   lineCol += yyleng;
{NEWLINE}+      lineNum += yyleng; lineCol = 0;

{CHARACTER}({CHAR}*{REGUALR_KEYPAD}+)? {
  yylval.ident_val = yytext;
  lineCol += yyleng;
  return IDENT;
	}

{DIGIT}+ {
  yylval.num_val = atoi(yytext);
  lineCol += yyleng;
  return NUMBER;
}

({DIGIT}+{UNDER_CHARACTER}{CHAR}*)|("_"{CHAR}+) {
  printf("Error. In %d, column %d: identifier \"%s\" The first of sentence must begin with a CHARACTER.\n",
	 lineNum, lineCol, yytext);
  exit(1);
}

{CHARACTER}({CHAR}*{REGUALR_KEYPAD}+)?"_" {
  printf("Error. In %d, column %d: identifier \"%s\" The first character cannot end with an underscore.\n",\
	 lineNum, lineCol, yytext);
  exit(1);
}


"##".*{NEWLINE} lineCol = 0; ++lineNum;


. {
  printf("Error at line %d, column %d: unrecognized symbol \"%s\" \n",
	   lineNum, lineCol, yytext);
  exit(1);
}
%%
int yyparse();

int main(int argc, char* argv[]) {
  if (argc == 2) {
    yyin = fopen(argv[1], "r");
    if (yyin == 0) {
      printf("The file has error: %s\n", argv[1]);
      exit(1);
    }
  }
  else {
    yyin = stdin;
  }
  yyparse();
  return 0;
}

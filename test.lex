%{
	int currLine = 1;
	int currPos = 1;
%}

/* Xia Hua xhu006 862118335 HW1 */ 
DOUBLE_UNDERSCORE [_][_]
QUESTION_MARK "?"

FUNCTION "function"
BEGIN_PARAMS "beginparams"
END_PARAMS "endparams"
BEGIN_LOCALS "beginlocals"
READ "read"
WRITE "write"
END_BODY "endbody"
INTEGER "integer"
END_LOCALS "endlocals"
BEGIN_BODY "beginbody"
OR "or"
NOT "not"
TRUE "true"
FALSE "false"
DO "do"
BEGINLOOP "beginloop"
ENDLOOP "endloop"
CONTINUE "continue"

ARRAY "array"
AND "and"

RETURN "return"
OF "of"
IF "if"
THEN "then"
ENDIF "endif"
ELSE "else"
WHILE "while"

SUB "-"
ADD "+"
MULT "*"
DIV "/"
MOD "%"

L_PAREN "("
R_PAREN ")"
L_SQUARE_BRACKET "["
R_SQUARE_BRACKET "]"

LT "<"
GT ">"
LTE "<="
GTE ">="
EQ "=="
NEQ "<>"

SEMICOLON ";"
COLON ":"
COMMA ","

ASSIGN ":="

/* Identifiers and Numbers */
letter [a-zA-Z]
digit [0-9]
NUMBER {digit}+

/* Identifier */ 
DIGITANDUNCERSCORE [0-9_][a-zA-Z0-9_]*[a-zA-Z0-9_]
ENDINGUNDERSCORE [a-zA-Z][a-zA-Z0-9_]*[_]
IDENTIFIER {letter}({letter}|{digit}|([_]({letter}|{digit})))*
NEWLINE "\n"
COMMENT [#][#].*
ANYTHINGNOTINCLUDED .
%%

{RETURN} {
	printf("RETURN\n");
	currPos += yyleng;
}

{AND} {
	printf("AND\n");
	currPos += yyleng;
}

{CONTINUE} {
	printf("CONTINUE\n");
	currPos += yyleng;
}

{WHILE} {
	printf("WHILE\n");
	currPos += yyleng;
}

{L_PAREN} {
	printf("L_PAREN\n");
	currPos += yyleng;
}

{R_PAREN} {
	printf("R_PAREN\n");
	currPos += yyleng;
}

{L_SQUARE_BRACKET} {
	printf("L_SQUARE_BRACKET\n");
	currPos += yyleng;
}

{R_SQUARE_BRACKET} {
	printf("R_SQUARE_BRACKET\n");
	currPos += yyleng;
}

{BEGIN_PARAMS} {
	printf("BEGIN_PARAMS\n");
	currPos += yyleng;
}

{BEGINLOOP} {
	printf("BEGINLOOP\n");
	currPos += yyleng;
}

{ENDLOOP} {
	printf("ENDLOOP\n");
	currPos += yyleng;
}

{NUMBER}+ {
	printf("NUMBER %s\n", yytext);
	currPos += yyleng;
}

{SUB} {
	printf("SUB\n");
	currPos += yyleng;
}

{ADD} {
	printf("ADD\n");
	currPos += yyleng;
}

{DIV} {
	printf("DIV\n");
	currPos += yyleng;
}

{MULT} {
	printf("MULT\n");
	currPos += yyleng;
}

{EQ} {
	printf("EQ\n");
	currPos += yyleng;
}

[ ]  {
	currPos += yyleng;
}

[ \t]+ {
	currPos += yyleng;
}

{COMMENT} {
	currLine +=1;
	currPos = 1;
}

{NEWLINE} {
	currLine +=1;
	currPos = 1;
}

{FUNCTION} {
	printf("FUNCTION\n");
	currPos += yyleng;
}

{ASSIGN} {
	printf("ASSIGN\n");
	currPos += yyleng;
}

{SEMICOLON} {
	printf("SEMICOLON\n");
	currPos += yyleng;
}

{COLON} {
	printf("COLON\n");
	currPos += yyleng;
}

{COMMA} {
	printf("COMMA\n");
	currPos += yyleng;
}

{END_PARAMS} {
	printf("END_PARAMS\n");
	currPos += yyleng;
}

{BEGIN_LOCALS} {
	printf("BEGIN_LOCALS\n");
	currPos += yyleng;
}

{END_LOCALS} {
	printf("END_LOCALS\n");
	currPos += yyleng;
}

{BEGIN_BODY} {
	printf("BEGIN_BODY\n");
	currPos += yyleng;
}

{END_BODY} {
	printf("END_BODY\n");
	currPos += yyleng;
}

{ENDIF} {
	printf("ENDIF\n");
	currPos += yyleng;
}

{GTE} {
	printf("GTE\n");
	currPos += yyleng;
}

{LTE} {
	printf("LTE\n");
	currPos += yyleng;
}
{MOD} {
	printf("MOD\n");
	currPos += yyleng;
}

{LT} {
	printf("LT\n");
	currPos += yyleng;
}

{GT} {
	printf("GT\n");
	currPos += yyleng;
}

{INTEGER} {
	printf("INTEGER\n");
	currPos += yyleng;
}

{THEN} {
	printf("THEN\n");
	currPos += yyleng;
}

{IF} {
	printf("IF\n");
	currPos += yyleng;
}

{OF} {
	printf("OF\n");
	currPos += yyleng;
}

{ELSE} {
	printf("ELSE\n");
	currPos += yyleng;
}

{OR} {
	printf("OR\n");
	currPos += yyleng;
}

{FALSE} {
	printf("FALSE\n");
	currPos += yyleng;
}

{DO} {
	printf("DO\n");
	currPos += yyleng;
}

{READ} {
	printf("READ\n");
	currPos += yyleng;
}

{WRITE} {
	printf("WRITE\n");
	currPos += yyleng;
}

{ARRAY} {
	printf("ARRAY\n");
	currPos += yyleng;
}

{DIGITANDUNCERSCORE} {
	currPos += yyleng;
	printf("Error at line %d, column %d: Identifier \"%s\" \nThe Variable begin with a digit or underscore\n",currLine,currPos,yytext);
	exit(0);
}
{ENDINGUNDERSCORE} {
	currPos += yyleng;
	printf("Error at line %d, column %d: Identifier \"%s\"\nThe ending cannot end with an underscore\n",currLine,currPos,yytext);
	exit(0);
}

{IDENTIFIER} {
	currPos += yyleng;
	printf("IDENT %s\n", yytext);
}

{ANYTHINGNOTINCLUDED} {
	printf("Error at line %d, column %d: unrecognized symbol \"%s\"\n", currLine, currPos, yytext);
	exit(0);
}

%%
/* user code*/

int main(int argc, char ** argv) {

	yylex();

}

#Makefile
all: mini_l.lex mini_l.y
	bison -d -v mini_l.y
	flex mini_l.lex	
	g++ -o my_compiler -x c++ mini_l.tab.c lex.yy.c -ll

clean:
	rm -f minil mini_l.tab.* mini_l.output *~ lex.yy.c my_compiler
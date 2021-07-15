#Makefile
parse: mini_l.lex mini_l.y
	  bison -v -d --file-prefix=y mini_l.y
	  flex mini_l.lex
	  gcc -o parser y.tab.c lex.yy.c -lfl
     
clean:
	rm -f *.o *~ lex.c lex.yy.c bison.c tok.h mini_l.tab.c mini_l.tab.h mini_l.output mini_l parser y.tab.* y.output
 
test1: parse
	cat fibonacci.min | parser

test2: parse
	cat mytest.min.1 | parser

test3: parse
	cat primes.min | parser

test4: parse
	cat mytest.min | parser

test5: parse
	cat fib.min | parser

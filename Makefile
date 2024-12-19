saida.out:
	gcc -c ponto.c main.c
	gcc -o a.out ponto.o main.o -lm

clean:
	rm a.out *.o

test-all: test-inputs test-alloc test-bib

test-inputs: test1 test2 test3 clean

test-alloc: test4 test5 clean

test-bib: test6 clean

test1: saida.out
	bash ./testes/test1.sh

test2: saida.out
	bash ./testes/test2.sh

test3: saida.out
	bash ./testes/test3.sh

test4: saida.out clean
	bash ./testes/test4.sh

test5: saida.out clean
	bash ./testes/test5.sh

test6: saida.out clean
	bash ./testes/test6.sh

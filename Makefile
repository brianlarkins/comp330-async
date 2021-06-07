CFLAGS=-g -Wall -Werror -Wunused

lab3: lab3.o
	clang -o $@ $^

clean:
	rm -f *.o lab3

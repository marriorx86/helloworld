main: main.c libhello.so hello.o
	gcc -o main main.c -L. -lhello

libhello.so: main.cpp hello.o
	g++ -fPIC -shared -o libhello.so ./main.cpp hello.o

hello.o: main.asm
	nasm -f elf64 main.asm -o hello.o

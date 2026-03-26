main: main.c libhello.so
	gcc -o main main.c -L. -lhello

libhello.so: main.cpp
	g++ -fPIC -shared -o libhello.so ./main.cpp

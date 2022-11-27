prog:main.o stat.o
	gcc main.o stat.o -o prog -g
main.o:main.c
	gcc -c main.c -g
stat.o:stat.c
	gcc -c stat.c -g

CC = gcc

ArgumentCounter: 
	$(CC) ArgumentCounter.c src/*.c -o ArgumentCounter.o -I headers

task23:
	$(CC) task23.c src/*.c -o task23.o -I headers

task31:
	$(CC) task31.c src/*.c -o task31.o -I headers

task32:
	$(CC) task32.c src/*.c -o task32.o -I headers

task33:
	$(CC) task33.c src/*.c -o task33.o -I headers

task41:
	$(CC) task41.c src/*.c -o task41.o -I headers

task43:
	$(CC) task43.c src/*.c -o task43.o -I headers

task51:
	$(CC) task51.c src/*.c -o task51.o -I headers

task52:
	$(CC) task52.c src/*.c -o task52.o -I headers

task54:
	$(CC) task54.c src/*.c -o task54.o -I headers

task61:
	$(CC) task61.c src/*.c -o task61.o -I headers

task22:
	$(CC) task22.c src/*.c -o task22.o -I headers
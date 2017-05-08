CC     = gcc
OBJ    = libmymath.a
SRC    = mymath.c
CFLAGS = -c -Wall -O2

$(OBJ):mymath.o
	ar cr $@ $<

mymath.o:$(SRC)
	$(CC) $(CFLAGS) $< -o $@


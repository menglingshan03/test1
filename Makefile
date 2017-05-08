
OBJ=main
SRC=src/main.c

$(OBJ):$(SRC)
	gcc $^ -o $@ -Llib/ -lmymath

include lib/Makefile 

#first modify

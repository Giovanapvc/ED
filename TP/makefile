
CC = gcc
LIBS = -lm
SRC = src
OBJ = obj
INC = include
BIN = bin
OBJS = $(OBJ)/fat.o  $(OBJ)/fibo.o  $(OBJ)/main.o 
HDRS = $(INC)/fat.h  $(INC)/fibo.h 
CFLAGS = -Wall -c -I  $(INC) 

EXE = $(BIN)/fat_fib

run:  $(EXE)
	$(EXE)  5


$(BIN)/fat_fib: $(OBJS)
	$(CC)  -pg -o $(BIN)/fat_fib $(OBJS) $(LIBS)

$(OBJ)/fat.o: $(HDRS) $(SRC)/fat.c
	$(CC) $(CFLAGS)  -pg  -o $(OBJ)/fat.o $(SRC)/fat.c 

$(OBJ)/fibo.o: $(HDRS) $(SRC)/fibo.c
	$(CC) $(CFLAGS)  -pg -o $(OBJ)/fibo.o $(SRC)/fibo.c 


$(OBJ)/main.o: $(HDRS) $(SRC)/main.c
	$(CC) $(CFLAGS)  -pg -o $(OBJ)/main.o $(SRC)/main.c 



#run: all
#./${OBJS}/${BIN}

clean:
	rm -f $(EXE) $(OBJS) gmon.out


CC = g++
CFLAGS = -c -g -Wall -Werror
LFLAGS = -o
INC = inc
SRC = src
OBJ = obj
BIN = bin
IFLAGS = -I$(INC)/

all: app

app: $(OBJ)/string.o
		$(CC) $(LFLAGS) $(BIN)/app $(OBJ)/string.o


$(OBJ)/string.o: $(SRC)/string.cpp
		$(CC) $(CFLAGS) $(SRC)/string.cpp $(IFLAGS)
			mv *.o $(OBJ)/


clean:
	rm -f a.out app
	rm -f $(OBJ)/*.o
	rm -f $(BIN)/app
	@echo "Cleaning Done!"


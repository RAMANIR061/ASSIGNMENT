CC = g++
CPPFLAGS = -c -Wall -g
LDFLAGS = -lcppunit -lm
OBJ = obj/
SRC = src/
BIN = bin/
INCLUDE = inc/
all: $(BIN)app

$(BIN)app: $(OBJ)TestDate.o $(OBJ)Date.o
	      $(CC) $(CPPFLAGS) $(LDFLAGS) -o app $(OBJ)TestDate.o
	            mv app $(BIN)

$(OBJ)TestDate.o: $(SRC)TestDate.cpp
	      $(CC) $(CPPFLAGS) $(SRC)TestDate.cpp -I $(INCLUDE)
	            mv TestDate.o $(OBJ)

$(OBJ)Date.o: $(SRC)Date.cpp
	      $(CC) $(CPPFLAGS) $(SRC)Date.cpp -I $(INCLUDE)
	            mv Date.o $(OBJ)

valgrind:
	      valgrind --leak-check=full ./main
	       
clean:
	 rm -f a.out app *.o
	 rm -f $(OBJ)*.o
	 rm -f $(BIN)app

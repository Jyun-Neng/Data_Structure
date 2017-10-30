#
#  Makefile for Assignment 1
#
#  by Alan Su
#  alansuphd@gmail.com
#

CC = g++
PCFLAG = -O1 -Wall -c
POFLAG = -O1 -Wall
HDR = List.h
SRC = ${HDR:.h=.cpp} main.cpp
OBJ = ${HDR:.h=.o} main.o
TARGET = list

all: $(TARGET)
Array.o: Array.h 
	$(CC) $(PCFLAG) $(@:.o=.cpp)
List.o: List.h List.cpp
	$(CC) $(PCFLAG) $(@:.o=.cpp)
main.o: main.cpp
	$(CC) $(PCFLAG) $(@:.o=.cpp)
$(TARGET): $(OBJ)
	$(CC) $(POFLAG) $(LIB) $(OBJ) -o $@

clean:
	rm $(OBJ)
	rm $(TARGET)

# Makefile
#
# Aidan Garske
# CSC 60
# Fall 2025

CC = gcc
CFLAGS = -Wall -g -I../include
AR = ar
ARFLAGS = rcs

# Object files
OBJS = utils.o reportFns.o
LIB = ../lib/lab7.a
EXEC = ../bin/lab7

all: $(EXEC)

$(EXEC): lab7.o $(LIB)
	$(CC) $(CFLAGS) -o $(EXEC) lab7.o $(LIB)

$(LIB): $(OBJS)
	$(AR) $(ARFLAGS) $(LIB) $(OBJS)

lab7.o: lab7.c ../include/lab7.h
	$(CC) $(CFLAGS) -c lab7.c

utils.o: utils.c ../include/lab7.h
	$(CC) $(CFLAGS) -c utils.c

reportFns.o: reportFns.c ../include/lab7.h
	$(CC) $(CFLAGS) -c reportFns.c

clean:
	$(RM) *.o

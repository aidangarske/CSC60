# main level makefile
# Aidan Garske
# CSC 60 - Spring 2025
# 11/11/2025

CC = gcc
CFLAGS = -Wall -g -I../../include
LIBS = ../../lib/student.a ../../lib/reports.a ../../lib/sigUtils.a

EXEC = ../../bin/lab10

all: $(EXEC)

$(EXEC): lab10.o $(LIBS)
	$(CC) $(CFLAGS) -o $(EXEC) lab10.o $(LIBS)

lab10.o: lab10.c ../../include/lab10.h
	$(CC) $(CFLAGS) -c lab10.c

clean:
	$(RM) *.o

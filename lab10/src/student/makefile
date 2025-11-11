# src level makefile
# Aidan Garske
# CSC 60 - Spring 2025
# 11/11/2025

CC = gcc
CFLAGS = -Wall -g -I../../include
AR = ar
ARFLAGS = rcs

LIB = ../../lib/student.a
OBJS = studUtils.o providedUtils.o

all: $(LIB)

$(LIB): $(OBJS)
	$(AR) $(ARFLAGS) $(LIB) $(OBJS)

studUtils.o: studUtils.c ../../include/lab10.h
	$(CC) $(CFLAGS) -c studUtils.c

providedUtils.o: providedUtils.c ../../include/lab10.h
	$(CC) $(CFLAGS) -c providedUtils.c

clean:
	$(RM) *.o

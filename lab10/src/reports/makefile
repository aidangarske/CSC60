# reports level makefile
# Aidan Garske
# CSC 60 - Spring 2025
# 11/11/2025

CC = gcc
CFLAGS = -Wall -g -I../../include
AR = ar
ARFLAGS = rcs

LIB = ../../lib/reports.a
OBJS = reports.o

all: $(LIB)

$(LIB): $(OBJS)
	$(AR) $(ARFLAGS) $(LIB) $(OBJS)

reports.o: reports.c ../../include/lab10.h
	$(CC) $(CFLAGS) -c reports.c

clean:
	$(RM) *.o

# sigUtils level makefile
# Aidan Garske
# CSC 60 - Spring 2025
# 11/11/2025

CC = gcc
CFLAGS = -Wall -g -I../../include
AR = ar
ARFLAGS = rcs

LIB = ../../lib/sigUtils.a
OBJS = sigUtils.o

all: $(LIB)

$(LIB): $(OBJS)
	$(AR) $(ARFLAGS) $(LIB) $(OBJS)

sigUtils.o: sigUtils.c ../../include/lab10.h
	$(CC) $(CFLAGS) -c sigUtils.c

clean:
	$(RM) *.o

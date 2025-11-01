# src level makefile
# Aidan Garske 
# CSC 60 Fall 2025
# 11/1/2025

CC      = gcc
CFLAGS  = -Wall -Wextra -std=c11 -I ../include
LDFLAGS =

SRCS = lab9.c lab9Utils.c stringStuff.c
OBJS = $(SRCS:.c=.o)
BIN  = ../bin/lab9

.PHONY: all clean

all: $(BIN)

$(BIN): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS) $(LDFLAGS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS) $(BIN)

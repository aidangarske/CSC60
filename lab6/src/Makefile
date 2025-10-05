# Makefile
# Aidan Garske
# CSC-60 Fall25

CC = gcc
CFLAGS = -I ../include -Wall -Wextra -std=c11
LDFLAGS =

SRCS = main.c bitwiseOps.c convUtils.c
OBJS = $(SRCS:.c=.o)

all: bitwise

bitwise: $(OBJS)
	$(CC) $(LDFLAGS) -o $@ $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) bitwise *.o *.a

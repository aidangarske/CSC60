# Makefile
# Aidan Garske
# CSC 60 fall 2025
# 9/27/25

INCFLG = -I ../include
CC = gcc
AR = ar

printRange: main.o lib.a
	@echo "Linking..."
	$(CC) main.o lib.a -o printRange

main.o: main.c
	@echo "Compiling..."
	$(CC) -c  $(INCFLG) main.c

lib.a: getRange.o printFuns.o
	@echo "Creating archive..."
	$(AR) vr lib.a $?

getRange.o: getRange.c
	@echo "Compiling getRange..."
	$(CC) -c $(INCFLG) getRange.c

printFuns.o: printFuns.c
	@echo "Compiling printFuns..."
	$(CC) -c $(INCFLG) printFuns.c

clean:
	${RM} printRange *.o *.a

# Lab 9 - Project level makefile
# Aidan Garske
# CSC 60 Fall 2025
# 11/1/2025

.PHONY: all build run clean

all: build

build:
	mkdir -p bin
	$(MAKE) -C src

run: build
	./bin/lab9

clean:
	$(RM) -r bin
	$(MAKE) -C src clean

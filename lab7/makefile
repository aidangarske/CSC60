# Makefile
#
# Aidan Garske
# CSC 60
# Fall 2025
#
# Project level makefile, sets up for the build
# then calls make for the src directory

build:
	mkdir -p bin lib
	make -C src

run:
	./bin/lab7 data/input.dat

clean:
	$(RM) -r bin lib
	make -C src clean

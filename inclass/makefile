# Project level makefile, sets up for the build
# then calls make for the src directory
all: build run

.PHONY: all build run clean

build:
	mkdir -p bin lib
	make -C src/print
	make -C src/utils
	make -C src/main

run:
	./bin/inClass data/input.dat

clean:
	$(RM) -r bin lib
	make -C src/main clean
	make -C src/print clean
	make -C src/utils clean

# Project level makefile
# Aidan Garske
# CSC 60 - Spring 2025
# 11/11/2025

build:
	mkdir -p bin lib
	make -C src/student
	make -C src/reports
	make -C src/sigUtils
	make -C src/main

clean:
	$(RM) -r bin lib
	make -C src/student clean
	make -C src/reports clean
	make -C src/sigUtils clean
	make -C src/main clean

run:
	export LAB10="FOO" && ./bin/lab10


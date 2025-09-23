# Notes CSC60 9/18 

## Grep commands 

searches any given input files selecting lines that match one or more pattern

-i - ignore case 
-c count how many occurences

0 lines where found 
1 no found 
> 1 error occuered

grep -i "main" test.c

### Regular expressions 

\w - matches letter, num, char
\s - matches whitespace
\d - matches single digits
. - signle char

## C projects in scale

### "Functions"

bits of code that actually return a functional result
divides complexity, DRY, reduces reduncacy 
In multiple files it needs to be compliled into a .o file and compile

preporccesor -> compiler -> assembler -> linker
- # defines 
- expanded source code
- remove comments 

linker resolves the functions addresses and locations

compile .c's to .o and make it executable 
but for each ,c there will be .o's

### Function prototype 

A decleration of the function / specify the name, params, retrun 
Needed when called before defined "forward refrence.." 
decleration of the function before its called 
needs time no name tho 
can say extern, reg, static, auto 
extern needed for global var

### Call by refrence / value 

call by value: actual value is stored 
only gets updated in the actual function the actual value not the address
call by refrence: pass the address of the var from main into function 
not getting int getting pointer or address of an int - when change calue it changes the value of the address

main(a,b)
a= 6

func(a, b) 
a= 8
return a

a is still 6 in main 

main(int *a,b)
 58 a= 6
 59 
 60 func(int *a, b)
 61 *a= 8
 62 return *a

 assigning it to the memoery address of a which updates in main definition
`*` is saying you are getting a pointer and the `&` is derefrance

### Breaking Code in C files

header file: include stuff into .c file like functions or information that is needed for lots of files and include the header file

proj 
src / 
test / 
docs /

```
each .o is a tralation unit 
cc -c addthem.c addthem2.c
cc -o addthem addthem.c addthem2.c
./addthem
```

### C libraries

archive / package / container that includes the actual .o's
pacakging of .o's is a .a
libs are static or dynamic 
static - link before program 
dynamic - link at runtime 

We can build our own .a with ar later












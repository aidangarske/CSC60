# CSC60 Notes 9/2 

## preprocessor

- Directives starts with # 
- First inclusions of the headers 
- <> are system incudes and dumps the contents into the file its getting
- If its a dir in your dir then you use the "" for the include 

- #defines are preprocessor macros - replaces every word in the 
- #else, #ifdef, need to know basis 
- we use defines to make code more DRY in some cases its a way to define long parts of code. 

## Types in C

- char 1, int 4, float 4, double 8 bytes
- f and d represented as interal represenation of floating point # 

## Data types and modifiers

signed/unsiged short/long 

## Variables in C

- defining vars: allocates space for it and stores value of the var 
- decalring vars: identifies the name and type for the compiler
- initialize on the definition

## Defining vars

assign: 

int day;
short int num1;
unsigned long int bigNum;

day = 1;

Initialze:

int day = 1;

## Arrays 

Contigous arrays in sequential rder 

char Array[10] = {'a', 'b', ...};

addressed with index num like 

char ThirdChar = Array[2]

## Constatnts 

const int A = 56; 
- Cannot change these nums enforeces vars same 

#define PI 3.14159
area = PI * 4






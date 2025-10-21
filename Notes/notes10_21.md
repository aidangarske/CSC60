# Notes 10/21 CSC60 

## Pointers, Mem Addresses, Process Mem space, Pointers

### Memory Addresses
How is data stored in memory?
- Stored in an array and you have index and value at each index
- we hold the memory address in the memory array based on a index to that array
- each address stores a specific byte iof data in memory space

In a linux process there are different segmants of memory.
What is a process? - An instante of a running program we call the proccess a running program
- each process has a chunk of memory that is allocated for each process

"Address of" = & which gets the address of the varaible attached to the operator
`%p` adds the 0x and shows the actual address pointer
defined next to each other but they are 4 bytes of allocated space in the mem array 
- The stack contains stack frames which are seperated in segmants
- heap can get memory soace at runtime and can dynamically allocate space for something 

#### Memory structure
stack - contains stack frames - no code in the stack it refrences mem stack and address of
heap - used for dynamic allocation
data - global and static data 
text - the compiled program code - directly loaded into the proccess mem

Stack and heap grow up and down at each other
```
stack
  v

  ^
heap 
data
text
```

#### Stack Frame
Each invocation of a functions creates a stack frame 
exist for the duration of the function call
```
main - stack frames 
f1
f2
f3
```
It knows how to go bak by refrencing the addess of the last frame
eachframe at runtime gets allocated memerory to run in each stack frame

#### Static vars
static vars are kept track of in the data segment rather than get dynamically 
allocated instead of looking at changing stuff like auto we get static vars

#### Arrays in C
- we define the type and the number of elements in the array 
- basically we allocate space before we run in the array and 0 based

```
char chArray[5]; a;_____
char chArray[10] = {'a', 'b', 'c'}; a;abc_______
char chArray[2]; // gets the third char
```

#### Pointers in C
A pointer is a variable that can be used to store the memory address of a 
varaible, funtion or even another pointer. 

The memory for holding a variable is allocate when the a variable is defiend
- sets aside a certain value based on type ex. int 4 bytes
- NULL for pointer is defined as unset as a pointer
- pointers store memory addresses what you are pointing at might change but 
  not the address at that spot
- Size of data is indepenant of data type so need to specify

**derefrecing** - Accessing the value at that pointers address and returning it
Pointers allow us to hold the address of other varaibles which we can get by derefrecing
- Allows us to pass in **updateable arguments** to functions

##### Pointer decleration 

pointer must point to type of var

```
int a, b, *ptr;
float c, *fptr;
```
* the star here tells us we are defing a int to a pointer and 
  a float to a pointer based on deceraltion

```
int myVar = 10 *myptr
myptr = &myVar

int abc = 5;
int xyz = 17;
int* ptr = &abc;

d is %d, *ptr = d is 5 which is the derefrenaced value at the address if the pointer
```
```
*p 
p = %p addr of p = %p, p &p 
p was never initialized so it is basically garbage - basically we would iitialize and it would be null
```

#### Casting 
A way of making a type to a different type you can cast int to char etc just 
by doing something like int(char) for example












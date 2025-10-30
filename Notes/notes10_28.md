# Notes 10/28 - CSC60 

## Pointers

### Pointer Math 

++ or -- 
+, or +=, - or -= 
arithmatic operations for pointers can be done as well like above
they are only really necesary if using a array 

```
0   1   2
10  8   9
100 104 108 <- array of ints 
```

running through an array 
index pointer or sum the array 

```
sum =0; 
for(k = 0; k < 6; k++) {
    sum += A[k];
}   
```

### Function Pointers

machine language in text there 
memory address where functions start that shows that in text 
I want to run a function I can setup a pointer to where it starts and run it from there in text section 

```
int (*incrPtr)(int);
```

### Dynamic Memory Allocation 

At runtime you basically allocate and specify the size you need and allocate that exact amount of memoery for what you are doing. 
Its one of the things that makes it very powerful and its also very hard

needs to hold data for a short time so use it and get rid of it. 

Allocating memory from the heap 
```
void *malloc(size_t size);
void *calloc (size_t num, size_t size);
void *realloc (void *ptr_size size);
void free (void *ptr);
```

`void *` means you get a pointer back which is not of particular type
it will go into a var iof particular type thats why we dont care while we are doing this

#### Allocating mem on heap

**malloc** -> pointer of success and null on failure
memory from malloc() is not initilized 

`int *p = malloc(5 * sizeof(int));'

the more that we get back is aligned in a "byte boundary" which allows any type to access with different size 

**calloc** -> number of items and size 
basically same jsut give two params
unlike malloc its an initilized the allocated memory to 0 

**realloc** -> it will return a dif pointer if there is no space / if there is space it will return old pointer 
use when you already allocated but need dif amount of memoery
if it fails the old pointer is actully good / if the failure happens no new pointer and returns null 
realloc actually frees the old pointer so its not usable and shouldnt be accessed

`int *new_ptr = realloc(ptr, 10*sizeof(int));`

**free** -> returns nothing 
just frees the used memory and adds it back to the hea

:wq
p 


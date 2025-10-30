# Notes 10/30 - CSC60 

## String Definition

string.h:
strlen(length of string)
- doesnt include the NULL char
strcmp(comapres strings)
- 0 same > 0 < 0 
strcat(concatinates two strings)
strcpy(copy strings)...
- need to have the corerct space already in place

$ man string
- get the short description of string functionality 

basically an array with null terminating charecter at the end 

## Structs

grouping of different data into a single variable sometimes called a record
record - contains multiple peices of info with differnt elements of data types

to define struct we use keyword `struct`

```
struct part {
    char[20] partNUm;
    doubl cost;
    int numinstock;
}
struct part itemA; <- define var A as a struct part 
```
* Now we can create one of these and update values of a group 

```
typedef struct {
    int month;
    int day;
} date_t;
```
dont need the tag name and date_t is alias for struct

```
date_t dob;
date hireDate;
```

`date_t *dob = malloc(sizeof(date_t));`
in this case we have a pointer to the space we allocated
can itilaize a struct as well

`date_t bDay = {3, 22, 234};`
like initilaizing a array

we can set values like

```
struct date today;
today.month = 4;
today.day = 22;
```

struct pointer to refrence elemets
```
struct date *datePtr = &today;
datePtr -> month = 5;
datePtr -> day = 12;
```

## Unions

unions: created as a varaible that can be addressed as different types
unions share the same memory
conserves memory 

```
union Job {
    unsigned long salary;
    int workerNo;
}

j.salary = 12;
j.workerNo = 65;

// now salary is 65 and salary is 65 amd everything else
```
can break apart number into individual bytes










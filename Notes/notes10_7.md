# Notes 10/7 CSC60

man 2 mkdir section 2 is system calls

## fILE I/O 

to open a file and recive back a file pointer to open a file
fopen() sytem call open() so deal with low level detailed stuff

open is used with system programming it has a little more options with flags
main reason is buffering of reads and writes open does unbuffer read write

unbuffer -  copy each one and there is overhead to get all text
buffer - buffer is copy whole thing no overhead

int open(const char * path, int openflags, or mode);
file modes only required when creating files

`O_RDONLY, O_WRONLY, etc`
create, read, write, append file

## Typedefs

define a alias or nickname of a existing type 
type: int, char, float etc

- help with readability and maintainibility 
- interpreted by the compliler

```
typedef int length_t;
length_t len, maxlen;
```

so basically make it know what type of int it is or type is used for

## Enumerations

enum keyword define a group of related constants which we can refer to in code
to identify a group of set consts 

enum day {mon, tues, wed, etc};

enum day d1, d2;
d1 = fri;
d1 == d2

enum sbSizes {
    small = 6
    medium = 8 
    etc.. 
    }

enum trees {oak, pine} trees_t;

typedef enum {oak, maple} trees_t;






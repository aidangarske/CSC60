# Notes CSC60 lecture 3 

## Read / write / execute

```
ls -l 
```

-rw-r--r-- owner group last modified name  
type of fil

- file
d dir
c char specific file
l link 
p named pipe FIFO processes send data through pipe
s socket 

3 sets of permissions and 3 types of permissions
owner/user - group - everybody else

read - write - execute
r    - w     - e

U G O
drwx - xr - x
user can read write execute 
group can execute and read 
only execute 

for dir
r allowed to see contents of dir
w add and remove files in dir
x can enter and see in the dir

755 - all permisions/read and x/read and x
644 - rw-r-r

000
421
rwx

chmod [ugoa][+-=][rwx]

bin/ system executables here
dev/ work with device by way of files stored here
etc/ sys admin scripts
tmp/ sys provided tmp space for files


## Paths

`/` deliminator
`.` relative to where you are 
`..` parent dir

relative 
doesnt start with slash basically goes back to a dir
absolute
starting from root starts with /

`?` represnts any char
`*` wildcard 

# Lecture 4 Notes 

## Code Blocks

block of code with curly brackets 
basically one line of code 

## Scope

variables visible in the whole program 
visiblilty id less than that of the program 
Block scope in the block of code
file scope in scope 

## Storage Class Specifier

auto int x;
automatic comes into scope and leaves auto -default
extern int x;
Linking in a dif file if its defined in a different file
need persitant global vars for more than one file
tells the compiler this and you will find it 
static int x; - static keeps it alive even after getting out of scope 
Want it to be kept and saved after control is complete
register int x;
request the variable is stired in a register 

how does main get a parameters
these come from the command line 

```
int main(int argc, char *argv[]) {

// validate the params need certain amount type
// called a usage statement 

}
```

./a.out foo bar
 argv[0] is ./a.out 
 argv[1] is foo 
 etc...



















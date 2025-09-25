# Notes 9/25 CSC60

## grep tee

you can tee commands and grep like
ls -l | grep wolfProvider to look for things
the tee command actually allows you to pipe it into the command after the pipe

## Find 

find [where i want to look] -name [name of file] -print

## Shell scripts

diff foo.out expected.out > ./actual.diff
compare the files out and if it is equal then pass not fail 

env - shows the env varaibles that are set

```
if [] then;
  # Statements
fi 
```

-eq - equlaity ie num1 -eq num2
-ge - greater than equal
-gt - greater than
-le - less than equal 
-lt - les than
-ne - not equal

can string together with -a and -o 

-e does this file exist? 
-f validates regular file exists

for 
while 
until 
```
for VAR in foo bar random 
do
    # do whtever
done

while []; do 

done
```

# Shell functions

if you dont say local in function defined in scope










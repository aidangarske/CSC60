# Study Guide

# 🚀 Improved / expanded summary + details (example)

## 1. Variables, types, memory

**Concise summary**:

* Variables are named storage locations in memory that hold values of certain types (e.g. `int`, `float`, `char`).
* Each type has size (in bytes) and representation (how bits represent value).
* Variables have addresses: the memory location where the value is stored.

**Expanded explanation**:

* In C, types determine how many bytes are allocated and how to interpret the bits. For example, `int` is typically 4 bytes (on many 32/64 bit machines, but might vary), `char` is typically 1 byte.
* Each variable occupies one or more bytes in memory; the system assigns a memory address for the that block. That address is where you can find or modify the variable’s value.
* Example:

  ```c
  int x = 42;
  char c = 'A';
  ```

  Here, `x` might occupy bytes at some address (say `0x7ffd1234`), and reading from that location gives `42`. `c` occupies one byte at some other address, giving ASCII code for `'A'`.

**Common pitfalls / further notes**:

* Type overflow: assigning a value outside the range of the the type leads to overflow or undefined behavior.
* Default (uninitialized) variables: local (automatic) variables may contain garbage if not initialized.

**Practice tasks**:

* Declare variables of different types, print their addresses using `&` operator.
* Print out sizes using `sizeof(type)` to see how many bytes each takes on your machine.

---

## 2. Pointers and dereferencing

**Concise summary**:

* A pointer is a variable whose value is the address of another variable (or memory).
* The `*` operator is used to dereference a pointer: that means accessing or modifying the the value at the address stored in the pointer.

**Expanded explanation**:

* Declaration: `int *p;` means `p` is a pointer to integer. It can hold the address of an `int`.
* Initialization: `p = &x;` sets `p` to the address of variable `x`.
* Dereference: `*p` means "go to the address stored in `p` and treat that memory as an integer value." You can read it, or assign to it:

  ```c
  int x = 10;
  int *p = &x;
  printf("%d\n", *p);  // prints 10
  *p = 20;             // modifies x to 20
  ```
* Relationship between pointer arithmetic: pointers can be incremented (e.g. `p + 1` means move forward by `sizeof(int)` bytes). This is useful when working with arrays.

**Common pitfalls / deeper points**:

* A pointer must point to valid memory. Dereferencing a pointer that hasn’t been initialized, or points to freed memory, causes undefined behavior.
* The pointer type matters: e.g. `int *` versus `char *` – dereferencing uses the type to decide how many bytes to read or how to interpret them.
* Null pointer: a pointer may be assigned `NULL` (or `0`), meaning it points to nothing; dereferencing `NULL` is invalid (segfault).

**Practice tasks**:

* Work with pointers to arrays: show how `array[i]` is equivalent to `*(array + i)`.
* Use pointers with dynamic memory (`malloc` / `free`) to understand heap memory.

---

## 3. Control flow, loops, basic input/output (likely early lecture content)

**Concise summary**:

* Use conditional statements (`if`, `else`, `switch`) to branch logic.
* Loops (`for`, `while`, `do-while`) repeat code based on conditions.
* Basic I/O: functions like `printf` / `scanf` for printing and reading values.

**Expanded explanation**:

* `for` loop: typically used when you know how many iterations you need. E.g:

  ```c
  for (int i = 0; i < n; i++) {
      // body
  }
  ```
* `while` loop: repeats as long as a condition is true; good when the number of iterations is not known in advance.
* `do-while`: executes the loop body at least once, then checks the condition.
* I/O:

  * `printf(format, ...)` is used for formatted output.
  * `scanf(format, &variable)` is used to read from standard input; need to pass the address so that function can store into the variable.

**Common pitfalls / deeper points**:

* Off-by-one errors in loops (e.g. using `<=` vs `<`).
* Improper format specifiers in `printf` / `scanf` (e.g. using `%d` for `double`).
* Always check the return value of `scanf` to know if input was successful.
* Buffer issues: using `%s` in `scanf` can overflow buffers if the input string is too large.

**Practice tasks**:

* Write loops to print sequences (e.g. Fibonacci, primes).
* Combine loops with arrays and pointers: reading array values via pointer arithmetic.

---

## 🔍 Next steps & suggestions for your notes

Since this is likely the “first bit of class,” here are suggestions to deepen your notes:

| Topic             | Expand with …                                                                  |
| ----------------- | ------------------------------------------------------------------------------ |
| Memory model      | Add diagrams of stack vs heap vs static/global memory.                         |
| Pointers          | Examples of pointers to pointers, function pointers.                           |
| Arrays & pointers | Show equivalence of array indexing vs pointer arithmetic.                      |
| Functions         | Pass pointers to functions to allow modifying variables from inside functions. |
| Strings           | Use `char *` and pointer arithmetic for string manipulation.                   |
| Error handling    | Check return values of input functions, avoid buffer overflows.                |

---

If you like, I can **pull in your actual note files** (if you give me a specific note file name, or paste the raw text here) and rewrite each note exactly, summarizing + expanding, in a neatly formatted version for you. Do you want me to go ahead and do that for all the notes you have so far?

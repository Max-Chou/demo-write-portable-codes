# ifdef Hells

It's very easy to add another compiler, system, or feature variant by adding #ifdef, but the code becomes unreadable and unmaintanable.


## Example 1

This example will use the function implemented from Windows, Linux, and Mac by #ifdef statements. The macro used in codes is fake and can define by `gcc -DWINDOWS`. 

### Solution

Use abstraction layer to seperate system-dependent codes and system-independent codes.

## Example 2

This codes are copied from the book, Fluent C. 

### Solution

1. Create the `path.h` and `path.c` to handle the posix file path and Windows file path.

2. Create the `filesystem.h` and `filesystem.c` to handle Windows APIs and Unix APIs.

3. Use boost library. (Lazy solution, but good one)


# Write Portable Codes

1. How to write the portable codes running on Windows, Linux, and Mac?
2. Suppose features are supported only on Windows or some options only work on Windows.
3. Suppose the client wants to use a specific function during the run-time.
4. Use the hardware-specific feature.

## Pre-defined Compiler Macros 

### Macros
https://sourceforge.net/p/predef/wiki/Compilers/

### Guide 
https://blog.kowalczyk.info/article/j/guide-to-predefined-macros-in-c-compilers-gcc-clang-msvc-etc..html

When writing portable C++ code you need to write conditional code that depends on the compiler used or the OS for which the code is written.

## Build Tools

You need the cross-platform build tools to compile the codes.

* CMake
* Bazel

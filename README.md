# Write Portable Codes

1. How to write the portable codes running on Windows, Linux, and Mac?
2. Suppose features are supported only on Windows or some options only work on Windows.
3. Suppose the client wants to use a specific function during the run-time.
4. Use the hardware-specific feature.

## Lazy Method

Find the portable libraries like boost which offers lots of functions on Windows, Linux, and Mac. Let these developers from **boost** to handle the cross-platform issues. 

https://www.boost.org/

Some featues are different on Windows and Linux, so you better use boost library to handle it. (Except for some experienced developers)

* Threading
* Networking
* File System 

Of course, there are some drawbacks and trade-off when using third-party library in your codes. 

1. vulnerabilities or memory leaks in the library - your application will have the same issues if you are using the problematic functions.
2. update the library - if there are newer version of boost library, how should we deliver or update it?
3. system-specific features - some system APIs only work for Windows, but the performance will be better than the function in the boost library.
4. conflict - suppose the client also uses the different version of boost library. 


## Compiler and Operating System

You need the compiler for the system to compile your codes. And also choose the archecture, x86, x64, arm64, to compile the code.

gcc, clang, msvc are the common compilers for mulitple platforms. 

### Pre-defined Compiler Macros 

When writing portable C++ code you need to write conditional code that depends on the compiler used or the OS for which the code is written.


#### Macros
https://sourceforge.net/p/predef/wiki/Compilers/

#### Guide 
https://blog.kowalczyk.info/article/j/guide-to-predefined-macros-in-c-compilers-gcc-clang-msvc-etc..html


## Build Tools

You need the cross-platform build tools to compile the codes.

* CMake
* Bazel

## Test
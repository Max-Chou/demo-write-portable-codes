# Write Portable Codes

First, you need to think about the platforms you want to support, Windows, Linux, Mac... Just think about how much resource you have and convince your boss not to do that shit... Next thing is the which features will be available for Windows or Linux or both systems. 

* Operating Systems
* Compilers

Second, you have to seperate the codes into system-dependent and system-independent codes. Or use the thrid-party library like boost to build rebuild the product. Using the portable libraries is easy, but it has some side effects. You can use abstraction layer to seperate the implementation into different files. And you should use the cross-platform build tools like CMake to build the codes for different systems.

Finally, you have to test the codes on different systems and release the codes. You have to use CI/CD tools to manage the codes and build the codes on the different systems. Better, CI/CD will perform test when the other developers merge the codes. 

To summarize it,

1. Evaluate the resource and benefit when moving to cross-platform application. And which platforms should you support.

2. Operating systems and compilers. Should have some standards on the version of compilers and the options for the compilers.

3. Coding. Use some techniques to seperate the codes into system-dependent and system-independent. Seperate the codes into organized folders and files.

4. Build Tools. Cross-platform build tools to compile the codds. 

5. Testing. Perform test on different platforms. (We are talking about unit test framework.) You can perform other testing if you want.

6. CI/CD Process. 
    1. Continuous Integration. Build and test when developers merge their codes.

    2. Continuous Delivery. Deliver the release builds to other teams or QA teams.


## Boost 

https://www.boost.org/

Using cross-platform library is easy solution to build the cross-platform applications. But there are some drawbacks when using third-party library in the codes. 

* Legal Problems - check if you can use the codes to make money
* Bugs - if there is a bug in the third party libraries, how to workaround it?
* Updates - if there is a newer version of the libraries, how to update? 


## Pre-defined Compiler Macros 

### Macros
https://sourceforge.net/p/predef/wiki/Compilers/

### Guide 
https://blog.kowalczyk.info/article/j/guide-to-predefined-macros-in-c-compilers-gcc-clang-msvc-etc..html


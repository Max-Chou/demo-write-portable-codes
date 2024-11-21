#ifdef WINDOWS
    #include "windows.h"

    #define MyCreateFile CreateFile
#endif

#ifdef LINUX
    #include "linux.h"

    #define MyCreateFile StartFile
#endif

#ifdef MAC
    #include "mac.h"

    #define MyCreateFile OpenFile
#endif

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>  


int main()
{
    char *buffer = (char *)malloc(1024);

    getcwd(buffer, 1024);

    // system specific codes... it's really ugly...
    MyCreateFile(buffer);

    // system independent codes

    printf("Hello World\n");

    free(buffer);

    return 0;
}
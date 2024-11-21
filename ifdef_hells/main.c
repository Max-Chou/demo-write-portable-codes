#ifdef WINDOWS
    #include "windows.h"
#endif

#ifdef LINUX
    #include "linux.h"
#endif

#ifdef MAC
    #include "mac.h"
#endif

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>  


int main()
{
    char *buffer = (char *)malloc(1024);

    getcwd(buffer, 1024);

    // system specific codes... it's really ugly...
#ifdef WINDOWS
    CreateFile(buffer);
#endif

#ifdef LINUX
    StartFile(buffer);
#endif

#ifdef MAC
    OpenFile(buffer);
#endif

    // system independent codes

    printf("Hello World\n");

    free(buffer);

    return 0;
}
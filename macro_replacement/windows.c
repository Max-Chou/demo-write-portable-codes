#ifdef WINDOWS
#include "windows.h"
#include <stdio.h>

void CreateFile(char *path)
{
    printf("Create File %s on Windows\n", path);
}

#endif
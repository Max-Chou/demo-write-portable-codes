#if defined(_WIN32) || defined(_WIN64)

#include "platform.h"
#include "loader.h"


MHANDLE LoadDLL(CHAR *path)
{   
    return LoadLibrary(path);
}

void *LoadFunctionFromDLL(MHANDLE handle, CHAR* funcName)
{
    return GetProcAddress(handle, funcName);
}


#endif
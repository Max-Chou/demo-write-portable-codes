#include "platform.h"
#include "loader.h"


MHANDLE LoadDLL(CHAR *path)
{   
    return dlopen(path, RTLD_LAZY);
}

void *LoadFunctionFromDLL(MHANDLE handle, CHAR* funcName)
{
    return dlsym(handle, funcName);
}

#include "platform.h"

MHANDLE LoadDLL(CHAR* path);

void * LoadFunctionFromDLL(MHANDLE handle, CHAR* funcName);

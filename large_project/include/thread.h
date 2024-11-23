#include "platform.h"


typedef void (*THREAD_FUNC)(void *args);
typedef struct ThreadFunctionArguments_s
{
    THREAD_FUNC fpFnc;
    void *targs; 
} ThreadFunctionArguments_t;

#if defined(_WIN32) || defined(_WIN64)

#elif defined(__linux) 

#else

#endif

THANDLE CreateThreadObject(THREAD_FUNC pfn, void *args);



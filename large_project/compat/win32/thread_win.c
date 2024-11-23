#include "platform.h"

#include "thread.h"


THANDLE CreateThreadObject(THREAD_FUNC pfn, void *args)
{
    THANDLE handle;
    ThreadFunctionArguments_t fp;

    fp.fpFnc = pfn;
    fp.targs = args;

    return CreateThread(
        NULL,
        0,
        _ThreadFunction,
        &fp,
        0,
        NULL
    );
}

static UINT32 WINAPI _ThreadFunction(LPVOID lpParameter)
{
    
    return 1;
}
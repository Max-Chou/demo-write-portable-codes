#include "platform.h"

#include "thread.h"


THANDLE CreateThreadObject(THREAD_FUNC pfn, void *args)
{
    THANDLE handle;
    pthread_create(&handle, NULL, pfn, args);
    return handle;
}

#ifdef WINDOWS
#include "windows.h"

#include "FileSystem.h"

HANDLE MyCreateFile(CreateFileParameters *para)
{
    char *path = para->path;
    int desiredAccess = para->desiredAccess;
    int shareMode = para->shareMode;

    return CreateFileA(
        path,
        desiredAccess,
        shareMode,
        NULL,
        CREATE_NEW,
        FILE_ATTRIBUTE_NORMAL,
        NULL
    );
}

#endif
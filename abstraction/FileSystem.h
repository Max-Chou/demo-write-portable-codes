
struct CreateFileParametersWin32
{
    char *path;
    int desiredAccess;
    int shareMode;
};

struct CreateFileParametersUnix
{
    char *path;
    int flags;
    int mode;
};

#ifdef WINDOWS
typedef struct CreateFileParameters CreateFileParametersWin32;
typedef void* HANDLE;
#else
typedef struct CreateFileParameters CreateFileParametersUnix;
typedef int HANDLE;
#endif

HANDLE MyCreateFile(CreateFileParameters *para);

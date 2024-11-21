// implement CreateFile function in Linux here

#ifdef LINUX

HANDLE MyCreateFile(CreateFileParameters *para)
{
    char *path = para->path;
    int flags = para->flags;
    int mode = para->mode;

    return open(path, flags, mode);
}

#endif
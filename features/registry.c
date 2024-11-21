#ifdef REGISTRY

void CreateKey(char *path, char *name)
{

}

void CreateData(char *path)
{

}

#else

// if not support the feature, return -1 or some error code
void CreateKey(char *path, char *name)
{
    return -1;
}

void CreateData(char *path, char *name)
{
    return -1;
}

#endif
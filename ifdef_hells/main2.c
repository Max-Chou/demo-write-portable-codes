#include <string.h>
#include <stdio.h>

#ifdef __unix__
    #include <sys/stat.h>
    #include <fcntl.h>
    #include <unistd.h>
#elif defined _WIN32
    #include <windows.h>
#endif

int main()
{
    char dirname[50];
    char filename[60];
    char* my_data = "Write this data to the file";

    #ifdef __unix__
    
    #ifdef STORE_IN_HOME_DIR    
    sprintf(dirname, "%s%s", getenv("HOME"), "/newdir/");
    sprintf(filename, "%s%s", dirname, "newfile");
    #elif defined STORE_IN_CWD
    strcpy(dirname, "newdir");
    strcpy(filename, "newdir/newfile");
    #endif
    mkdir(dirname, S_IRWXU);
    int fd = open(filename, O_RDWR | O_CREAT, 0666);
    write(fd, my_data, strlen(my_data));
    close(fd);

    #elif defined _WIN32
    #ifdef STORE_IN_HOME_DIR
    sprintf(dirname, "%s%s%s", getenv("HOMEDRIVE"), getenv("HOMEPATH"), "\\newdir\\");
    sprintf(filename, "%s%s" dirname, "newfile");
    #elif defined STORE_IN_CWD
    strcpy(dirname, "newdir");
    strcpy(filename, "newdir\\newfile");
    #endif
    CreateDirectory(dirname, NULL);
    HANDLE hFile = CreateFile(filename, GENERIC_WRITE, 0, NULL, CREATE_NEW, FILE_ATTRIBUTE_NORMAL, NULL);
    WriteFile(hFile, my_data, strlen(my_data), NULL, NULL);
    CloseHandle(hFile);
    #endif
    
    return 0;
}
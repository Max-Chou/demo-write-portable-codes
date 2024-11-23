# Macro Replacement

On Windows, we can use the macro like _Unicode to select the APIs for wide characters or multibytes characters. 

```c
#ifdef _UNICODE

#define CreateFile CreateFileW

#else

#define CreateFile CreateFileA

#endif

```

## Limitation

The arguments of these functions should be the same. You cannot use the macro replacement for unix open and windows CreateFile.

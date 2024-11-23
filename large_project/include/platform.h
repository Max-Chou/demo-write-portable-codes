#ifndef _PLATFORM_H_
#define _PLATFORM_H_

// macros for supporting platforms, or you can name your own platforms
// these are the official macros for operating systems
// Linux        __linux
// Darwin       __APPLE__
// Windows      _WIN32
// Windows 64   _WIN64

// feature support on specific platform
#if defined (_WIN32) || defined (_WIN64) 
#define SUPPORT_REGISTRY
#endif


// generic text (unicode)
// windows support unicode character or multi-bytes character
#if defined (_WIN32) || defined (_WIN64)
#define Text(szString)                  TEXT(szString)
#define CHAR                            _TCHAR
#define WCHAR                           wchar_t
#define Print                           _tprintf
#define FormatPrint                     _stsprintf
#define ArgumentPrint                   _vtprintf
#define ArgumentFilePrint               _vftprintf
#define FormatScan                      _stscanf
#define StringCopy                      _tcscpy
#define StringNCopy                     _tcsncpy
#define StringCat                       _tcscat
#define StringChar                      _tcschr
#define StringRChar                     _tcsrchr
#define StringLen                       _tcslen
#define StringCompare                   _tcscmp
#define StringNCompare                  _tcsncmp
#define StringString                    _tcsstr
#define ReadString                      _fgetts

#else
#define Text(szString)                  szString
#define CHAR                            char
#define WCHAR                           wchar_t
#define Print                           printf
#define FormatPrint                     sprintf
#define ArgumentPrint                   vprintf
#define ArgumentFilePrint               vfprintf
#define FormatScan                      sscanf
#define StringCopy                      strcpy
#define StringNCopy                     strncpy
#define StringCat                       strcat
#define StringChar                      strchr
#define StringRChar                     strrchr
#define StringLen                       strlen
#define StringCompare                   strcmp
#define StringNCompare                  strncmp
#define StringString                    strstr
#define ReadString                      fgets
#endif

// headers 
#include <stdio.h>
#include <stdlib.h>
// system-specific headers
// threading, networking, filesystem...
#if defined (_WIN32) || defined (_WIN64)

#include <io.h>
#include <process.h>
#include <malloc.h>
#include <memory.h>
#include <windows.h>
#include <tchar.h>

#if defined (_UNICODE)
#define LoadLibrary                     LoadLibraryW
#else
#define LoadLibrary                     LoadLibraryA
#endif


#endif

#if defined (__linux)
#include <signal.h>
#include <pthread.h>
#include <dlfcn.h>

#endif


#if defined (__APPLE__)
#include <signal.h>
#include <pthread.h>
#include <dlfcn.h>


#endif





// if the definitions are complex, you can separate the header to smaller headers
// machine dependent code definition 
#if defined _WIN32
#include "m_win32.h"
#endif

#if defined _WIN64
#include "m_win64.h"
#endif

#if defined __linux
#include "m_linux.h"
#endif



#endif
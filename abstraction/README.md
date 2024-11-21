# Abstraction

Provide an abstraction layer and implement platform-specfic feature in the file. And select the file what you want to compile for which platform. (Using Build Tools)

linux.c
```c
#include "FileSystem.h"

// implement function for linux
... 
```

windows.c
```c
#include "FileSystem.h"

// implement function for Windows
... 
```

FileSystem.h
```c
// define struct 

// typedef 

// function prototypes

... 
```

## Additional Feature

We also handle the system-specific parameters by compilation directives.


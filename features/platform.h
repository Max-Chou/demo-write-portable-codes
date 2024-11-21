#ifdef WINDOWS

// include windows headers here


// define macros for features supporting on Windows
#define REGISTRY
#define NETWORK
#define FILE

// define macros for Windows


#endif 

#ifdef LINUX

#define NETWORK
#define FILE

#endif

#ifdef MAC

#define FILE

#endif 


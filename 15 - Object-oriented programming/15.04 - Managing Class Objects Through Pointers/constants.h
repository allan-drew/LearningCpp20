
/// In the C and C++ programming languages, an #include guard, sometimes called a macro guard, header guard, or file guard, is a particular construct used to avoid the problem of double inclusion when dealing with the include directive.

/// Notice that we are including " #include "constants.h" " TWICE (in the main.cpp and in the cylinder.h), so, this code below help to avoid the problem of double inclusion

// #ifndef: if not defined, determines if provided macros does not exists.
// #define: Defines the macros.
// #endif: Closes off #ifndef directive.


#ifndef CONSTANTS_H //(Any word you like but unique to program)
#define CONSTANTS_H //(same word as used earlier)

const double PI {3.1415926535897932384626433832795};

#endif
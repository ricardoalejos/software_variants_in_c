#ifndef _CONFIGURATION_H_
#define _CONFIGURATION_H_

#include "library.h"
#if LIBRARY_IMPLEMENTATION == 1
#include "library_implementation_1.h"
struct Library_Interface * library_a = &Library_implementation_1;
struct Library_Interface * library_b = &Library_implementation_1;
#elif LIBRARY_IMPLEMENTATION == 2
#include "library_implementation_2.h"
struct Library_Interface * library_a = &Library_implementation_2;
struct Library_Interface * library_b = &Library_implementation_2;
#elif LIBRARY_IMPLEMENATATION == BOTH
#include "library_implementation_1.h"
#include "library_implementation_2.h"
struct Library_Interface * library_a = &Library_implementation_1;
struct Library_Interface * library_b = &Library_implementation_2;
#else
#error You must choose 1, 2 or 3 (both) for LIBRARY_IMPLEMENTATION
struct Library_Interface * library_a;  // Dummy declaration for app development
struct Library_Interface * library_b;
#endif

#endif

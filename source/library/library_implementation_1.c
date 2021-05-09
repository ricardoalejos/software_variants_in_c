#include "library.h"
#include <stdio.h>

int implementation_1_function(struct Library_Interface * library_interface);

struct Library_Interface Library_implementation_1 = {
    .function = implementation_1_function
};

int implementation_1_function(struct Library_Interface * library_interface) {
    printf("Running implementation 1's function\n");
    return Library_ErrorCode_SUCCESS;
}

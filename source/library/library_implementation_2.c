#include "library.h"
#include <stdio.h>

int implementation_2_function(struct Library_Interface * library_interface);

struct Library_Interface Library_implementation_2 = {
    .function = implementation_2_function
};

int implementation_2_function(struct Library_Interface * library_interface) {
    printf("Running implementation 2's function\n");
    return Library_ErrorCode_SUCCESS;
}

#ifndef _LIBRARY_H_
#define _LIBRARY_H_

enum Library_ErrorCode {
    Library_ErrorCode_SUCCESS,
    Library_ErrorCode_ERROR_BASE
};

struct Library_Interface {
    int (*function)(
        struct Library_Interface * library_interface
    );
};

#endif

#ifndef __ASSERTION_RESULT_H
#define __ASSERTION_RESULT_H

#include <stdbool.h>

typedef struct AssertionResult {
    bool success;
    char* error_message;
    char* test_name;
} AssertionResult;

#endif

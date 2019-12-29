#ifndef __ASSERTION_RESULT_H
#define __ASSERTION_RESULT_H

#include <stdbool.h>

typedef struct AssertionResult {
    bool success;
    char* errorMessage;
} AssertionResult;

#endif

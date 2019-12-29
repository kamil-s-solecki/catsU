#include <stdbool.h>
#include "assertion_result.h"

AssertionResult assertTrue(bool value)
{
    AssertionResult result;
    if (value) {
        result.success = true;
    } else {
        result.success = false;
        result.errorMessage = "Expected true to be false";
    }

    return result;
}

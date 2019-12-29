#include <stdbool.h>
#include "assertion_result.h"

AssertionResult assertTrue(char* test_name, bool value)
{
    AssertionResult result;
    if (value) {
        result.success = true;
    } else {
        result.success = false;
        result.error_message = "Expected true to be false";
    }
    
    result.test_name = test_name;

    return result;
}

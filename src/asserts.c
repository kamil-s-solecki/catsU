#include <stdio.h>
#include <stdbool.h>
#include "assertion_result.h"

AssertionResult assert_true(char* test_name, bool value)
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

AssertionResult assert_int_equals(char* test_name, int expected, int actual)
{
    AssertionResult result;
    if (expected == actual) {
        result.success = true;
    } else {
        result.success = false;

        char buf[256];
        snprintf(buf, sizeof buf, "Expected %d but got %d", expected, actual);
        result.error_message = buf;
    }
    
    result.test_name = test_name;

    return result;
}

AssertionResult assert_char_equals(char* test_name, char expected, char actual)
{
    AssertionResult result;
    if (expected == actual) {
        result.success = true;
    } else {
        result.success = false;

        char buf[256];
        snprintf(buf, sizeof buf, "Expected '%c' but got '%c'", expected, actual);
        result.error_message = buf;
    }
    
    result.test_name = test_name;

    return result;
}

#include <stdio.h>
#include <stdbool.h>
#include "asserts.h"
#include "assertion_result.h"

AssertionResult test_bool_success()
{
    return assert_true("Should return true", true);
}

AssertionResult test_bool_fail()
{
    return assert_true("Should return false", false);
}

AssertionResult test_int_equality_success()
{
    return assert_int_equals("Should be equal to 123", 123, 123);
}

AssertionResult test_int_equality_fail()
{
    return assert_int_equals("Should not be equal to 123", 123, 124);
}

AssertionResult test_char_equality_success()
{
    return assert_char_equals("Should be equal to 'a'", 'a', 'a');
}

AssertionResult test_char_equality_fail()
{
    return assert_char_equals("Should not be equal to 'a'", 'a', 'b');
}

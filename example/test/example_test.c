#include <stdio.h>
#include <stdbool.h>
#include "asserts.h"
#include "assertion_result.h"
#include "functions_under_test.h"

AssertionResult test_bool_success()
{
    bool result = negation(false);

    return assert_true("Should return true", result);
}

AssertionResult test_bool_fail()
{
    bool result = broken_negation(false);

    return assert_true("Should return false", result);
}

AssertionResult test_int_equality_success()
{
    int result = int_sum(2, 3);

    return assert_int_equals("Should be equal to 5", 5, result);
}

AssertionResult test_int_equality_fail()
{
    int result = broken_int_sum(2, 3);

    return assert_int_equals("Should not be equal to 5", 5, result);
}

AssertionResult test_char_equality_success()
{
    char result = char_echo('a');

    return assert_char_equals("Should be equal to 'a'", 'a', result);
}

AssertionResult test_char_equality_fail()
{
    char result = broken_char_echo('a');

    return assert_char_equals("Should not be equal to 'a'", 'a', result);
}

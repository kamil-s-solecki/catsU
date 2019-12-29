#include <stdio.h>
#include <stdbool.h>
#include "asserts.h"
#include "assertion_result.h"

AssertionResult test_foo()
{
    return assert_true("Should return true", true);
}

AssertionResult test_bar()
{
    return assert_true("Should return false", false);
}


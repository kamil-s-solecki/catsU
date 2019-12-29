#include <stdio.h>
#include <stdbool.h>
#include "asserts.h"
#include "assertion_result.h"

AssertionResult test_foo()
{
    return assertTrue("Should return true", true);
}

AssertionResult test_bar()
{
    return assertTrue("Should return false", false);
}


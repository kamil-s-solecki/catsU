#include <stdio.h>
#include <stdbool.h>
#include "asserts.h"
#include "assertion_result.h"

AssertionResult test_foo()
{
    return assertTrue(true);
}

AssertionResult test_bar()
{
    return assertTrue(false);
}


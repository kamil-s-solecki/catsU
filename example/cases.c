#include <stdio.h>
#include "test_cases.h"
#include "example_test.h"

TestCases* createTestCases()
{
    TestCases *cases = TestCases__create();
    TestCases__add(cases, test_foo);
    TestCases__add(cases, test_bar);
    return cases; 
}

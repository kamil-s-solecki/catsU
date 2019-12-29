#include <stdio.h>
#include "test_cases.h"
#include "example_test.h"

TestCases* createTestCases()
{
    TestCases *cases = TestCases__create();
    TestCases__add(cases, test_bool_success);
    TestCases__add(cases, test_bool_fail);
    TestCases__add(cases, test_int_equality_success);
    TestCases__add(cases, test_int_equality_fail);
    TestCases__add(cases, test_char_equality_success);
    TestCases__add(cases, test_char_equality_fail);
    return cases; 
}

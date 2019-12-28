#include <stdio.h>
#include "test_cases.h"

void foo()
{
    printf("fooo!\n");    
}

void bar()
{
    printf("barrrrr!\n");    
}

TestCases* createTestCases()
{
    TestCases *cases = TestCases__create();
    TestCases__add(cases, foo);
    TestCases__add(cases, bar);
    return cases; 
}

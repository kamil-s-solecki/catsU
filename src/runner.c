#include <stdio.h>
#include "test_cases.h"

void run(TestCases* cases)
{
    printf("Running!\n");

    TestCases__runAll(cases);        
}

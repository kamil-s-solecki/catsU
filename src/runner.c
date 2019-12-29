#include <stdio.h>
#include "test_cases.h"

void run(TestCases* cases)
{
    printf("\n############      Running!      ############\n\n");

    TestCases__runAll(cases);        
}

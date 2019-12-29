#include "test_cases.h"
#include "cases.h"
#include "runner.h"

void main()
{
    TestCases *cases = createTestCases();

    run(cases);
}

#include "assertion_result.h"

typedef void* TestCases;

typedef AssertionResult (*test_case_pointer)(void);

TestCases* TestCases__create();

void TestCases__add(TestCases* self, test_case_pointer pointer);

void TestCases__runAll(TestCases* self);

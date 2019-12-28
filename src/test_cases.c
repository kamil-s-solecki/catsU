#include <stdlib.h>
#include "test_cases.h"

struct TestCases {
    size_t amount;
    size_t capacity;
    test_case_pointer* test_cases;
};

TestCases* TestCases__create()
{
    struct TestCases *result = (struct TestCases*) malloc(sizeof(struct TestCases));
    result->amount = 0;
    result->capacity = 20;
    result->test_cases = malloc(20 * sizeof(test_case_pointer));
    return (TestCases*) result;
}

void TestCases__add(TestCases* self, test_case_pointer pointer)
{
    struct TestCases *_self = (struct TestCases*) self;
    _self->test_cases[_self->amount] = pointer;
    _self->amount++;
}

void TestCases__runAll(TestCases* self)
{
    struct TestCases *_self = (struct TestCases*) self;
    for (size_t i = 0; i < _self->amount; i++) {
        _self->test_cases[i]();
    }
}

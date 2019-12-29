#ifndef __EXAMPLE_TEST_H
#define __EXAMPLE_TEST_H

#include "assertion_result.h"

AssertionResult test_bool_success();

AssertionResult test_bool_fail();

AssertionResult test_int_equality_success();

AssertionResult test_int_equality_fail();

AssertionResult test_char_equality_success();

AssertionResult test_char_equality_fail();

#endif

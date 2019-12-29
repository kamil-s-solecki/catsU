#ifndef __ASSERTS_H
#define __ASSERTS_H

#include "assertion_result.h"

AssertionResult assert_true(char* test_name, bool value);

AssertionResult assert_int_equals(char* test_name, int expected, int actual);

AssertionResult assert_char_equals(char* test_name, char expected, char actual);

#endif

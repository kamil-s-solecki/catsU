# catsU
### A tiny unit testing framework in C.

Examples can be found in [example_test.c](example/test/example_test.c)

To run a test, create a [TestCases](src/test_cases.h) struct and register your test functions (registration example [here](example/test/cases.c)).

A test function must have no arguments, and return an [AssertionResult](src/assertion_result.h) which is returned by each of predefined [assertions](src/asserts.h).



![results](https://i.postimg.cc/65RWYqdF/results2.png)

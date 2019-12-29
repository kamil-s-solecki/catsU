#include <stdbool.h>

bool negation(bool value)
{
    return !value;
}

bool broken_negation(bool value)
{
    return value;
}

int int_sum(int a, int b)
{
    return a + b;
}

int broken_int_sum(int a, int b)
{
    return a + b + 1;
}

char char_echo(char value)
{
    return value; 
}

char broken_char_echo(char value)
{
    return value + 1; 
}


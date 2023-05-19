#include "calc.h"

int add(int x, int y)
{
    return x + y;
}

int sub(int x, int y)
{
    return x - y;
}

int mul(int x, int y)
{
    return x * y;
}

int div(int x, int y)
{
    return x / y;
}

int mod(int x, int y)
{
    return x % y;
}

int power_two(int x)
{
    return power(x, 2);
}

int power(int x, int n)
{
    int out = x;
    for (int i = 1; i < n; i++)
    {
        out = mul(out, x);
    }
    return out;
}

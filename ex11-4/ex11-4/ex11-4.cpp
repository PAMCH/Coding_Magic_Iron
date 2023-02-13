#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include <climits>

int main()
{
    char a = 0x7f;
    short b = 0x7fff;
    int c = 0x7fffffff;

    printf("%hhd\n%hd\n%d\n", a, b, c);

    return 0;
}
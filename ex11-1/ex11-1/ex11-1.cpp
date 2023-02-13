#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include <climits>

int main()
{
    char a = 0b01001111;
    char b = 0b00110011;
    char c = 0b10101001;
    char d = 0b11110000;

    printf("%hhd\n%hhd\n%hhd\n%hhd\n", a, b, c, d);

    return 0;
}
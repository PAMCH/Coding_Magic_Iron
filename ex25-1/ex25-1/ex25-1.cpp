#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
    char a[11], b[12];

    scanf("%s %s", a, b + 1);

    printf("%s\n%s\n", a, b + 1);

    return 0;
}            
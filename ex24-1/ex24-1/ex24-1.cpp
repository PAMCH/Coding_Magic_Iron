#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

void output(const int* ptr) {
    printf("%d\n", *ptr);
}

int main()
{
    const int a = 10;

    output(&a);

    return 0;
}
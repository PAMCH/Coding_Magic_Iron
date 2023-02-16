#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#define N 30

char a[31], b[31];

void input() {
    scanf("%s %s", a, b);
}

int main()
{
    input();
    printf("%s, %s\n", b, a);

    return 0;
}
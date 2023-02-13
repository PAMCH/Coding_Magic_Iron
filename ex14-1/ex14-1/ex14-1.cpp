#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include <climits>

void border(int x) {
    printf("+");

    for (int i = 1; i <= x; i++) {
        printf("-");
    }

    printf("+\n");
}

void body(int x) {
    printf("|");

    for (int i = 1; i <= x; i++) {
        printf("-");
    }

    printf("|\n");
}

int main()
{
    int n;

    scanf("%d", &n);

    border(n);

    for (int i = 1; i <= n - 2; i++) {
        body(n);
    }

    border(n);

    return 0;
}
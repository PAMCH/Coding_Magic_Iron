#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include <climits>

void divisor(int x) {
    int i, sum = 0;

    for (i = 1; i < x; i++) {
        if (x % i == 0) {
            sum += i;
        }
    }

    if (sum == x) {
        printf("PERFECT\n");
    }
    else if (sum > x) {
        printf("ABUNDANT\n");
    }
    else {
        printf("DEFICIENT\n");
    }
}


int main()
{
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    divisor(a);
    divisor(b);
    divisor(c);

    return 0;
}
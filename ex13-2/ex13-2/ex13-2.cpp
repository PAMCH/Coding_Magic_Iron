#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include <climits>

int divisor(int x) {
    int i, sum = 0;

    for (i = 1; i <= x; i++) {
        if (x % i == 0) {
            sum += i;
        }
    }

    return sum;
}


int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    printf("%d\n%d\n%d\n", divisor(a), divisor(b), divisor(c));

    return 0;
}
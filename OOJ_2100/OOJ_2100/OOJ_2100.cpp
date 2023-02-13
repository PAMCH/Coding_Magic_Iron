#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include <climits>

int divisor(int x) {
    int sum = 0;

    for (int i = 1; i < x; i++) {
        if (x % i == 0) {
            sum += i;
        }
    }

    return sum;
}

int main()
{
    int n;

    scanf("%d", &n);

    while (1) {
        int sum1 = divisor(n);
        int sum2 = divisor(sum1);

        if (sum1 != n && sum2 == n) {
            printf("%d %d\n", n, sum1);
            break;
        }

        n++;
    }
    return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include <climits>

int n;

void divisor() {
    int sum = 0;

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    printf("%d\n", sum);
}

void prime() {
    int cnt, sum = 0;

    for (int i = 1; i <= n; i++) {
        cnt = 0;
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                cnt++;
            }
        }

        if (cnt == 2) {
            sum += i;
        }
    }
    printf("%d\n", sum);
}

int main()
{
    scanf("%d", &n);

    divisor();
    prime();

    return 0;
}
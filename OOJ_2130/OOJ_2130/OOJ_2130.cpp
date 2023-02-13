#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include <climits>

int carryCount(int x, int y) {
    int carry = 0, cnt = 0;

    while (x || y) {
        carry = (carry + (x % 10) + (y % 10)) / 10;
        if (carry > 0) {
            cnt++;
        }
        x /= 10;
        y /= 10;
    }

    return cnt;
}

int main()
{
    int i, a, b;

    for (i = 1; i <= 3; i++) {
        scanf("%d %d", &a, &b);
        printf("%d\n", carryCount(a, b));
    }

    return 0;
}
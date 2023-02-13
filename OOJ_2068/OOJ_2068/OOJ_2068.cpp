#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include <climits>

int div(int x) {
    for (int i = 2; i <= x; i++) {
        if (x % i == 0) {
            return i;
        }
    }
    return 1;
}

int main()
{
    int n;

    scanf("%d", &n);

    while (n != 1) {
        int num = div(n);
        printf("%d\n", num);
        n /= num;
    }

    return 0;
}
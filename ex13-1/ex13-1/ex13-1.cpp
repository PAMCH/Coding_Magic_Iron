#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include <climits>

void prime(int x) {
    int i, cnt = 0;

    for (i = 1; i <= x; i++) {
        if (x % i == 0) {
            cnt++;
        }
    }

    if (cnt == 2) {
        printf("PRIME\n");
    }
    else {
        printf("NO PRIME\n");
    }
}


int main()
{
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    prime(a);
    prime(b);
    prime(c);

    return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include <climits>

int vertex(int a, int b, int c) {
    if (b == c)
        return a;
    else if (a == c)
        return b;
    return c;
}

int main()
{
    int i, x[4], y[4];

    for (i = 1; i <= 3; i++) {
        scanf("%d %d", &x[i], &y[i]);
    }

    printf("%d %d\n", vertex(x[1], x[2], x[3]), vertex(y[1], y[2], y[3]));

    return 0;
}
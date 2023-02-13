#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include <climits>

int a, b, c, d, p, g, m;

void visitor(int t) {
    int n1 = (t - 1) % (a + b) + 1 <= a;
    int n2 = (t - 1) % (c + d) + 1 <= c;

    if (n1 + n2 == 2) {
        printf("both\n");
    }
    else if (n1 + n2 == 1) {
        printf("one\n");
    }
    else {
        printf("none\n");
    }
}

int main()
{
    scanf("%d %d %d %d", &a, &b, &c, &d);
    scanf("%d %d %d", &p, &g, &m);

    visitor(p);
    visitor(g);
    visitor(m);

    return 0;
}
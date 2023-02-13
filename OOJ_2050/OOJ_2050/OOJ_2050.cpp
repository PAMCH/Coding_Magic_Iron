#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include <climits>

int main()
{
    int n, x, cnt1 = 0, cnt2 = 0;

    scanf("%d", &n);

    x = n;

    while (x)
    {
        if (x % 10 == 0)
            cnt1++;
        else
            break;
        x /= 10;
    }

    x = n;

    while (x)
    {
        if ((x & 1) == 0)
            cnt2++;
        else
            break;
        x >>= 1;
    }

    printf("%d %d\n", cnt1, cnt2);

    return 0;
}
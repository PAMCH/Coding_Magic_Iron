#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int n, s, e, a[101];

void input() {
    scanf("%d %d %d", &n, &s, &e);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
    }
}

void reverse(int* start, int* end) {
    while (start < end)
    {
        int temp = *start;
        *start = *(end - 1);
        *(end - 1) = temp;
        start++;
        end--;
    }
}

void output() {
    for (int i = 1; i <= n; i++)
        printf("%d ", a[i]);
}

int main()
{
    input();
    reverse(a + s, a + e + 1);
    output();

    return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int n, a[101];

void input() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
    }
}

int max(int* start, int* end) {
    int max = *start;
    while (start != end)
    {
        if (max < *start) {
            max = *start;
        }
        start++;
    }

    return max;
}
int main()
{
    input();
    printf("%d\n", max(a + 1, a + n + 1));

    return 0;
}
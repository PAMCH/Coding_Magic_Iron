#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#define N 99

int n, a[N + 1];


int sort(int* arr) {
    for (int i = 1; i <= n - 1; i++) {
        for (int j = i + 1; j <= n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    return arr[n / 2 + 1];
}

void input() {
    int b[N + 1];

    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            scanf("%d", &b[j]);
        }
        a[i] = sort(b);
    }
}

int main()
{
    input();
    printf("%d\n", sort(a));


    return 0;
}
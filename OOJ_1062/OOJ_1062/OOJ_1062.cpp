#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int n;
char a[4];

void input() {
    scanf("%d", &n);
    scanf("%s", a);
}

void output() {
    printf("%c\n", a[2]);
    for (int i = 1; i <= n - 2; i++) {
        printf("%c", a[0]);
        for (int j = 1; j <= i - 1; j++) {
            printf(" ");
        }
        printf("%c\n", a[2]);
    }

    printf("%c", a[0]);

    for (int i = 1; i <= n - 1; i++) {
        printf("%c", a[1]);
    }
}

int main()
{
    input();
    output();

    return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#define N 3

int a[N + 1];
char b[4];

void input() {
    scanf("%d %d %d", &a[1], &a[2], &a[3]);
    scanf("%s", b);
   
    int temp;
    if (a[1] > a[2])
        temp = a[1], a[1] = a[2], a[2] = temp;
    if (a[1] > a[3])
        temp = a[1], a[1] = a[3], a[3] = temp;
    if (a[2] > a[3])
        temp = a[2], a[2] = a[3], a[3] = temp;
}

void output() {
    for (int i = 0; i < 3; i++) {
        if (b[i] == 'A')
            printf("%d ", a[1]);
        else if (b[i] == 'B')
            printf("%d ", a[2]);
        else
            printf("%d ", a[3]);
    }
    printf("\n");
}

int main()
{
    input();
    output();

    return 0;
}
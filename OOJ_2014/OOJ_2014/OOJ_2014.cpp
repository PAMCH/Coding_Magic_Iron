#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int n;

void input() {
    scanf("%d", &n);
}

void core1(int* const b) {
    for (int i = 1, sum = 0; i <= n; i++) {
        sum += i;
        if (sum >= n) {
            *b = i;
            break;
        }
    }
}

void core2(int* const t, int* const b) {
    for (int i = *b, sum = 0; i >= 1; i--) {
        sum += i;
        if (sum >= n) {
            *t = i - (sum - n);
            break;
        }
    }
}

void output() {
    int top, bot;

    core1(&bot);
    core2(&top, &bot);
    printf("%d %d\n", bot, top);
}

int main()
{
    input();
    output();

    return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
    int a[4][3][5] = { {0},
        {{0},{0,1,2,3,4},{0,5,6,7,8}},
        {{0},{0,9,10,11,12},{0,13,14,15,16}},
        {{0},{0,17,18,19,20},{0,21,22,23,24}},
    };
    int h, i, j;

    for (h = 1; h <= 3; h++) {
        for (i = 1; i <= 2; i++) {
            for (j = 1; j <= 4; j++) {
                printf("%d ", a[h][i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
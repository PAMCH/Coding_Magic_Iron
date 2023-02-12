#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
	int a[3][6] = { {0},{0,5,7,13,11,6},{0,10,45,11,4,9} };
	int i, j, sum = 0;

	for (i = 1; i <= 2; i++) {
		for (j = 1; j <= 5; j++) {
			if (a[i][j] % 2 == 0) {
				sum += a[i][j];
			}
		}
	}

	printf("%d\n", sum);

	return 0;
}
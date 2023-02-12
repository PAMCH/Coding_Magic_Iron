#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
	int a[10][10],i,j,max=-1,x,y;

	for (i = 1; i <= 9; i++) {
		for (j = 1; j <= 9; j++) {
			scanf("%d", &a[i][j]);
		}
	}

	for (i = 1; i <= 9; i++) {
		for (j = 1; j <= 9; j++) {
			if (max < a[i][j]) {
				max = a[i][j];
				x = i;
				y = j;
			}
		}
	}

	printf("%d\n%d %d\n", max, x, y);

	return 0;
}
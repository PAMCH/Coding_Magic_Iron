#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
	int score[6], grade[6] = { 0 };
	int i, j, x, y, z;

	for (i = 1; i <= 5; i++) {
		scanf("%d %d %d", &x, &y, &z);
		score[i] = x + y + z;
	}

	for (i = 1; i <= 5; i++) {
		grade[i] = 1;
			for (j = 1; j <= 5; j++) {
				if (score[i] < score[j]) {
					grade[i]++;
				}
			}
	}

	for (i = 1; i <= 5; i++) {
		printf("%d\n", grade[i]);
	}

	return 0;
}
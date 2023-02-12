#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
	int grade[101] = { 0 }, score[101];
	int i, j, n;

	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		scanf("%d", &score[i]);
	}

	for (i = 1; i <= n; i++) {
		grade[i] = 1;
		for (j = 1; j <= n; j++) {
			if (score[i] < score[j]) {
				grade[i]++;
			}
		}
	}

	for (i = 1; i <= n; i++) {
		printf("%d ", grade[i]);
	}

	return 0;
}
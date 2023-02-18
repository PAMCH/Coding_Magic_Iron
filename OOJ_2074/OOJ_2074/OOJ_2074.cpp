#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include <cstring>
#define N 75

char a[N + 2];
int n;

void input() {
	scanf("%s", &a[1]);
	n = strlen(&a[1]);
}

int isWiggle(int start, int end) {
	int toggle = a[start] < a[start + 1] ? 1 : 0;

	for (int i = start; i <= end - 1; i++) {
		if (!((toggle == 1 && a[i] < a[i + 1]) || (toggle == 0 && a[i] > a[i+1])))
			return 0;
		toggle = 1 - toggle;
	}
	return 1;
}

void core() {
	int max = 1;

	for (int i = 1; i <= n - 1; i++) {
		for (int j = i + 1; j <= n; j++) {
			if (isWiggle(i, j) == 1 && max < j - i + 1)
				max = j - i + 1;
		}
	}

	printf("%d\n", max);
}

int main()
{
	input();
	core();

	return 0;
}
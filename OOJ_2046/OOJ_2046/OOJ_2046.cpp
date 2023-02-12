#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
	int n, arr[100001];
	int i, x, y;

	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		scanf("%d %d", &x, &y);
		arr[i] = x + y;
	}

	for (i = n; i >= 1; i--) {
		arr[i - 1] += arr[i] / 10;
		arr[i] %= 10;
	}

	for (i = 1; i <= n; i++) {
		printf("%d", arr[i]);
		if (i % 100 == 0) {
			printf("\n");
		}
	}

	return 0;
}
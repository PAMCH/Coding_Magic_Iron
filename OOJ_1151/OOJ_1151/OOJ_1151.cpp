#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
	int n, i, max, cnt = 0;
	int arr[100001];

	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		scanf("%d", &arr[i]);
	}

	max = -1;

	for (i = 1; i <= n; i++) {
		if (max < arr[i]) {
			max = arr[i], cnt++;
		}
	}

	printf("%d", cnt);

	return 0;
}
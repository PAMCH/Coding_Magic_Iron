#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
	int i, n, arr[101], min, max, far, near, sum;

	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		scanf("%d", &arr[i]);
	}

	min = max = far = near = sum = arr[1];

	for (i = 2; i <= n; i++) {
		min = min > arr[i] ? arr[i] : min;
		max = max < arr[i] ? arr[i] : max;
		far = abs(far) < abs(arr[i]) ? arr[i] : far;
		near = abs(near) > abs(arr[i]) ? arr[i] : near;
		sum += arr[i];
	}

	printf("%d %d %d %d %d\n", min, max, far, near, sum);

	return 0;
}
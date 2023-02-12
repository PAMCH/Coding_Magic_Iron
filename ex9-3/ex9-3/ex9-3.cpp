#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
	int n,i;
	long long a[91] = { 0,1 };

	scanf("%d", &n);

	for (i = 2; i <= n; i++) {
		a[i] = a[i - 1] + a[i - 2];
	}

	printf("%lld\n", a[n]);

	return 0;
}
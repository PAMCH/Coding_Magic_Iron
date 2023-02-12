#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
	double a[21], temp;
	int n, i, j, k;

	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		scanf("%lf", &a[i]);
	}

	for (k = 1; k <= n; k++) {
		for (i = k; i <= n - 1; i++) {
			for (j = 1 + i; j <= n; j++) {
				if (a[i] > a[j]) {
					temp = a[i], a[i] = a[j], a[j] = temp;
				}
			}
		}

		a[k + 1] = (a[k] + a[k + 1]) / 2;
	}

	printf("%lf\n", a[n]);

	return 0;
}
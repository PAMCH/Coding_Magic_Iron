#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
	int i, n, s, sum = 0, cnt = 0;
	double ave;

	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		scanf("%d", &s);
		if (s <= 0) {
			cnt++;
		}
		else {
			sum += s;
		}
	}

	n -= cnt;

	ave = double(sum) / n;

	printf("%d\n", int(ave * 10 + 0.5));

	return 0;
}
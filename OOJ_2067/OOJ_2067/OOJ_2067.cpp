#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int digitSum(int x) {
	while (x >= 10)
	{
		int n = x, sum = 0;
		while (n)
		{
			sum += n % 10;
			n /= 10;
		}

		x = sum;

	}

	return x;
}

int main()
{
	int a, b, d, cnt = 0;

	scanf("%d %d %d", &a, &b, &d);

	for (int i = a; i <= b; i++) {
		if (digitSum(i) == d) {
			cnt++;
		}
	}

	printf("%d\n", cnt);

	return 0;
}
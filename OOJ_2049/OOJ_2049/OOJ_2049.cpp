#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int n;

int reverse(int x) {
	int r = 0;
	while (x)
	{
		r = r * 10 + x % 10;
		x /= 10;
	}
	return r;
}

int main()
{
	int cnt = 0;

	scanf("%d", &n);

	while (n != reverse(n)) // 팔린드롬
	{
		n = n + reverse(n);
		cnt++;
	}
	printf("%d %d\n", cnt, n);
	return 0;
}
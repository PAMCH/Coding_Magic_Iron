#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#define N 10000

int n, check[N + 1];

void input() {
	scanf("%d", &n);
}

void core() {
	int i = 0;

	while (check[n] == 0) {
		check[n] = ++i;
		int n1 = (n / 100) % 10;
		int n2 = (n / 10) % 10;
		n = (n1 * 10 + n2) * (n1 * 10 + n2);
	}

	printf("%d\n", i);
}

int main()
{
	input();
	core();

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#define N 250000

int n, e, check[N + 1], p[10];

void input() {
	scanf("%d %d", &n, &e);
	for (int i = 1; i <= 9; i++) {
		p[i] = int(pow(i, e));
	}
}

void core() {
	int i = 0;

	while (check[n]==0)
	{
		int num = 0;
		check[n] = ++i;
		while (n !=0)
		{
			num += p[n % 10];
			n /= 10;
		}
		n = num;
	}

	printf("%d\n", check[n] - 1);
}


int main()
{
	input();
	core();

	return 0;
}
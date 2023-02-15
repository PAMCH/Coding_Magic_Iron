#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#define N 5000
#define P 20000

int n, a[N + 1];
int prime[P + 1];

void input() {
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
		scanf("%d", &a[i]);

	for (int i = 2; i <= P; i++)
		if (prime[i] == 0)
			for (int j = i * i; j <= P; j += i)
				prime[j] = 1;
}

int maxPrime(int x) {
	for (int i = x; i >= 1; i--)
		if (prime[i] == 0 && x % i == 0)
			return i;
	return 1;
}

void core() {
	int max = 0, res;

	for (int i = 1; i <= n; i++) {
		int num = maxPrime(a[i]);
		if (max < num)
			max = num, res = a[i];
	}

	printf("%d\n", res);
}


int main()
{
	input();
	core();

	return 0;
}
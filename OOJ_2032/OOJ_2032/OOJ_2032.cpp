#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#define N 100

int n, a[N + 1], check[N + 1], cnt;

void input() {
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
		scanf("%d", &a[i]);
}

void core() {
	for(int i=1;i<=n;i++)
		if (check[i] == 0) {
			cnt++;
			check[i] = 1;
			for (int num = a[i]; num != i; num = a[num])
				check[num] = 1;
		}
	printf("%d\n", cnt);
}

int main()
{
	input();
	core();

	return 0;
}
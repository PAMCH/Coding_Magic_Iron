#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#define N 100

int n, m, a[N + 1], max;

void input() {
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
	}
}

void core() {
	for (int i = 1; i <= n - 2; i++) {
		for (int j = i + 1; j <= n - 1; j++) {
			for (int k = j + 1; k <= n; k++) {
				if (a[i] + a[j] + a[k] <= m && max < a[i] + a[j] + a[k]) {
					max = a[i] + a[j] + a[k];
				}
			}
		}
	}

}

void output() {
	printf("%d\n", max);
}

int main()
{
	input();
	core();
	output();

	return 0;
}
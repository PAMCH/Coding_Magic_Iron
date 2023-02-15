#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#define N 50

int n, m, a[N + 1], isOk;

void input() {
	scanf("%d", &n);
	scanf("%d", &m);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
	}
}

void core() {
	for (int i = 1; i <= n && !isOk; i++) {
		for (int j = 1; j <= n && !isOk; j++) {
			for (int k = 1; k <= n && !isOk; k++) {
				for (int l = 1; l <= n && !isOk; l++) {
					if (a[i] + a[j] + a[k] + a[l] == m)
						isOk = 1;
				}
			}
		}
	}
}

void output() {
	if (isOk) {
		printf("Yes\n");
	}
	else {
		printf("No\n");
	}
}

int main()
{
	input();
	core();
	output();

	return 0;
}
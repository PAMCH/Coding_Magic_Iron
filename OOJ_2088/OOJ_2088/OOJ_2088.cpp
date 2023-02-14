#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

const int N = 1000;
int m, a[N + 1];

void prime(int x) {
	for (int i = 1; i <= x; i++) {
		int cnt = 0;
		for(int j=1;j<=i;j++){
			if (i % j == 0) {
				cnt++;
			}
		}

		if (cnt <= 2) {
			a[++m] = i;
		}
	}
}

int main()
{
	int n, c;
	scanf("%d %d", &n, &c);

	prime(n);

	int  cc = m % 2 ? c * 2 - 1 : c * 2;

	if (m <= cc) {
		for (int i = 1; i <= m; i++) {
			printf("%d ", a[i]);
		}
	}
	else {
		for (int i = 1; i <= cc; i++) {
			printf("%d ", a[i + (m - cc) / 2]);
		}
	}

	return 0;
}
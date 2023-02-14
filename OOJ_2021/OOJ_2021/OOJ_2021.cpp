#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

void boder(int x) {
	printf("+");
	for (int i = 1; i <= x * 2 + 1; i++) {
		printf("-");
	}
	printf("+");
}

void space(int x = 3) {
	for (int i = 1; i <= x; i++) {
		printf(" ");
	}
}

void body(int x) {
	printf("I");
	for (int i = 1; i <= x; i++) {
		printf("-X");
	}
	printf("-I");
}

int main()
{
	int n, m;

	scanf("%d %d", &n, &m);

	int max = (n > m ? n : m);
	for (int i = 0; i <= max + 1; i++) {
		if (i == 0 || i == n + 1) {
			boder(n);
		}
		else if (i < n + 1) {
			body(n);
		}
		else {
			space(n * 2 + 3);
		}

		space();

		if (i == 0 || i == m + 1) {
			boder(m);
		}
		else if (i < m + 1) {
			body(m);
		}
		else {
			space(m * 2 + 3);
		}

		printf("\n");
	}


	return 0;
}
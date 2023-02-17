#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include <cstring>
#define N 100000

char a[N + 1];
int c[10], sum;

void input() {
	scanf("%s", a);
}


void core() {
	int L = strlen(a);
	for (int i = 0; i < L; i++) {
		sum += (a[i] - '0');
		c[a[i] - '0']++;
	}
}

void output() {
	if (sum % 3 == 0 && c[0] > 0) {
		for (int i = 9; i >= 0; i--) {
			for (int j = 1; j <= c[i]; j++) {
				printf("%d", i);
			}
		}
	}
	else {
		printf("-1");
	}
	printf("\n");
}

int main()
{
	input();
	core();
	output();

	return 0;
}
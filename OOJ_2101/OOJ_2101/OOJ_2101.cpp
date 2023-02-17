#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

const int n = 4;
char a[n + 2], b[n + 2];
int strike, ball;

void input() {
	scanf("%s %s", &a[1], &b[1]);
}


void core() {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (i == j && a[i] == b[j])
				strike++;
			else if (i != j && a[i] == b[j])
				ball++;
		}
	}

	printf("%dA%dB\n", strike, ball);
}

int main()
{
	input();
	core();

	return 0;
}
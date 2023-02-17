#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include <cstring>
#define N 20

char a[N + 1];
int r;

void input() {
	scanf("%d %s", &r, a);
}

void output() {
	for (int i = 0; i < strlen(a); i++) {
		for (int j = 1; j <= r; j++) {
			printf("%c", a[i]);
		}
	}
	printf("\n");
}

int main()
{
	input();
	output();

	return 0;
}
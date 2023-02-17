#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#define N 10

char a[N + 1];


void input() {
	scanf("%s", a);
}

void output() {
	for (int i = 0; i < strlen(a); i++) {
		printf("%c->%hhd\n", a[i], a[i]);
	}
}

int main()
{
	input();
	output();

	return 0;
}
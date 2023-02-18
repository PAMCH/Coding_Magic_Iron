#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include <cstring>
#define N 1000

char a[N + 1];

void input() {
	scanf("%s", a);
}

char decode(char ch) {
	if (ch >= 'D' && ch <= 'Z')
		return ch - 3;
	return ch + 23;
}

void output() {
	for (int i = 0; i < strlen(a); i++) {
		printf("%c", decode(a[i]));
	}
}

int main()
{
	input();
	output();

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include <cstring>
#define N 1000

int a[27], b[27];

void input() {
	char str[N + 2];
	int len;

	scanf("%s", &str[1]);
	len = strlen(&str[1]);
	for (int i = 1; i <= len; i++) {
		a[str[i] - 'a' + 1]++;
	}
	scanf("%s", &str[1]);
	len = strlen(&str[1]);
	for (int i = 1; i <= len; i++) {
		b[str[i] - 'a'+1]++;
	}
}

inline int min2(const int& x, const int& y) {
	return x < y ? x : y;
}

void output() {
	for (int i = 1; i <= 26; i++) {
		int min = min2(a[i], b[i]);
		for (int j = 1; j <= min; j++)
			printf("%c", i + 'a' - 1);
	}
}

int main()
{
	input();
	output();

	return 0;
}
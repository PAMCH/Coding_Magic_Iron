#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

const char* str = "TINUKEDSOG";
int n, m, cnt, a[10];

void input() {
	scanf("%d %d", &n, &m);
}


void core() {
	int x = n + m;
	while (x) {
		a[++cnt] = x % 10;
		x /= 10;
	}
}

void output() {
	for (int i = cnt; i >= 1; i--) {
		printf("%c", str[a[i]]);
	}
}

int main()
{
	input();
	core();
	output();

	return 0;
}
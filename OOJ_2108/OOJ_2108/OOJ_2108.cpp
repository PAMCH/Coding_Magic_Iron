#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include <cstring>
#define N 409600

void f(int n, char* str) {
	char t[N + 2];

	strcpy(t, str + n);
	strcat(t, str);
	strcpy(str, t);
}

int main()
{
	int z, n, c;
	char str[N + 2];

	scanf("%d", &z);
	
	for (int i = 1; i <= z; i++) {
		scanf("%d %d %s", &n, &c, str);

		for (int j = 1; j <= c; j++) {
			f(n, str);
		}
		printf("%s\n", str);
	}

	return 0;
}
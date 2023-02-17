#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
	char a[11], b[11];

	scanf("%s", a);

	for (int i = 0; i < strlen(a); i++) {
		printf("%s\n", a + i);
	}

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>


int main()
{
	char a[11];

	scanf("%s", a);

	for (int i = strlen(a) - 1; i >= 0; i--) {
		printf("%c", a[i]);
	}
	printf("\n");

	return 0;
}
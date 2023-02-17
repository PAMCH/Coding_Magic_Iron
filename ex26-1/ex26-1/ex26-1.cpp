#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
	char a[11];

	scanf("%s", a);

	if (strlen(a) % 2)
		printf("odd\n");
	else
		printf("even\n");

	return 0;
}
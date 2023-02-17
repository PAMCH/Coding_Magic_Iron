#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
	char a[11], b[11];

	scanf("%s", a);
	scanf("%s", b);

	if (strcmp(a, b) < 0)
		printf("Negative\n");
	else if (strcmp(a, b) > 0)
		printf("Positive\n");
	else
		printf("Zero\n");

	return 0;
}
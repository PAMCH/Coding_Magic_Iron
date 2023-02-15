#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
	int n = 10;
	int* ptr1, * ptr2;

	ptr1 = &n;
	ptr2 = ptr1;
	printf("%d\n%d\n%d\n", (*ptr1)++, (*ptr2)++, n);

	return 0;
}
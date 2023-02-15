#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>


int main()
{
	int a, b;
	int* ptr1, * ptr2;

	scanf("%d %d", &a, &b);

	ptr1 = &a;
	ptr2 = &b;

	(*ptr1)--;
	(*ptr2)--;

	ptr1 = &b;
	ptr2 = &a;

	printf("%d %d\n", *ptr1, *ptr2);

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
	int a[5] = { 1,2,3,4,5 };
	int* ptr = a;

	for (int i = 0; i < 5; i++)
		*(ptr + i) += 2;

	for (int i = 0; i < 5; i++)
		printf("%d ", *(ptr + i));

	return 0;
}
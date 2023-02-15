#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
	char a = 'A';
	int b = 10;
	double c = 3.8;

	char* ptr1 = &a;
	int* ptr2 = &b;
	double* ptr3 = &c;

	(*ptr1)++;
	(*ptr2)++;
	(*ptr3)++;

	printf("%c %d %.1f", a, b, c);

	return 0;
}
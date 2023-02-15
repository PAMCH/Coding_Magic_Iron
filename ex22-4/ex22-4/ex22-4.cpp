#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
	int a[11] = { 0,10,20,30,40,50,60,70,80,90,100 };
	int s, e;
	int* ptr = a;

	scanf("%d %d", &s, &e);

	for (int i = s, j = e; i <= (s + e) / 2; i++, j--) {
		int temp = *(ptr + i);
		*(ptr + i) = *(ptr + j);
		*(ptr + j) = temp;
	}

	for (int i = 1; i <= 10; i++) {
		printf("%d ", *(ptr + i));
	}

	return 0;
}
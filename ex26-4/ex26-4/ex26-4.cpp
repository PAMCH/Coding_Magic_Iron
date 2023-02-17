#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

void swap(char* str1, char* str2) {
	char temp[11];

	strcpy(temp, str1);
	strcpy(str1, str2);
	strcpy(str2, temp);
}

int main()
{
	char a[11], b[11];

	scanf("%s", a);
	scanf("%s", b);

	printf("%s, %s\n", a, b);
	swap(a, b);
	printf("%s, %s\n", a, b);

	return 0;
}
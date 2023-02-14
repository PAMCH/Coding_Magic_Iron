#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

double price(int r, int p) {
	double area = r * r * 3.141592;
	return p / area;
}

double price(int h, int w, int p) {
	int  area = h * w;
	return double(p) / area;
}

int main()
{
	int r, p1;
	int h, w, p2;

	scanf("%d %d", &r, &p1);
	scanf("%d %d %d", &h, &w, &p2);

	if (price(r, p1) < price(h, w, p2)) {
		printf("CIRCLE\n");
	}
	else {
		printf("RECTAGLE\n");
	}

	return 0;
}
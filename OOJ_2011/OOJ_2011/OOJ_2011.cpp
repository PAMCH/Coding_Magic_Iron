#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include <cstring>
#define N 100

int n, m, a[N + 1][N + 1], s[N + 1][N + 1], min;


void input() {
	scanf("%d %d", &n, &m);

	for(int i=1;i<=n;i++)
		for (int j = 1; j <= n; j++) {
			scanf("%d", &a[i][j]);
			s[i][j] = s[i - 1][j] + s[i][j - 1] - s[i - 1][j - 1];
			s[i][j] += a[i][j];
		}
}

void core() {
	for (int i=m;i<=n;i++)
		for (int j = m; j <= n; j++) {
			int cnt = s[i][j] - s[i - m][j] - s[i][j - m];
			cnt += s[i - m][j - m];
			if (min == 0 || min > cnt)
				min = cnt;
		}

	printf("%d\n", min);
}


int main()
{
	input();
	core();

	return 0;
}
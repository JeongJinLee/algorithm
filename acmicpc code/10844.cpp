#include <stdio.h>
long long d[101][10] = { {0,}, {0,1,1,1,1,1,1,1,1,1}, };
int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 2; i <= n; i++) {
		for (int j = 0; j < 10; j++) {
			if (j == 0)
				d[i][j] = d[i][j] + d[i - 1][j + 1];
			else if (j == 9)
				d[i][j] = d[i][j] + d[i - 1][j - 1];
			else {
				d[i][j] = d[i][j] + d[i - 1][j - 1] + d[i - 1][j + 1];
			}
			d[i][j] %= 1000000000;
		}
	}
	long long ans = 0;
	for (int i = 0; i <= 9; i++) ans += d[n][i];
	ans %= 1000000000;
	printf("%lld\n", ans);
	return 0;
}
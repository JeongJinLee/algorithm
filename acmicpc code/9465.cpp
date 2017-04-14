#include <stdio.h>
int D[2][100001][2] = { {{ 0, },}, };
int S[2][100001] = { { 0, }, };
int max(int a,int b, int c, int d) {
	if (a >= b && a >= c && a >= d)
		return a;
	else if (b >= a && b >= c && b >= d)
		return b;
	else if (c >= a && c >= b&&c >= d)
		return c;
	else if (d >= a&&d >= b&&d >= c)
		return d;
	else
		return -1;//error
}
int max2(int a, int b, int c) {
	if (a >= b && a >= c )
		return a;
	else if (b >= a && b >= c )
		return b;
	else if (c >= a && c >= b)
		return c;
	else
		return -1;
}
int main(void) {
	int T;
	scanf("%d", &T);
	while (T--) {
		int n;
		scanf("%d", &n);
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < n; j++) {
				scanf("%d", &S[i][j]);
			}
		}
		D[0][0][0] = 0;
		D[0][0][1] = S[0][0];
		D[1][0][0] = 0;
		D[1][0][1] = S[1][0];
	for (int j = 1; j < n; j++) {
			D[0][j][0] = max(D[0][j - 1][0], D[0][j - 1][1], D[1][j - 1][0], D[1][j - 1][1]);
			D[1][j][0] = max(D[0][j - 1][0], D[0][j - 1][1], D[1][j - 1][0], D[1][j - 1][1]);
			D[0][j][1] = max2(D[0][j-1][0], D[1][j - 1][0], D[1][j - 1][1])+S[0][j];
			D[1][j][1] = max2(D[0][j - 1][0], D[0][j - 1][1], D[1][j - 1][0])+S[1][j];
			
		}
		printf("%d\n", max(D[0][n - 1][0], D[0][n - 1][1], D[1][n - 1][0], D[1][n - 1][1]));
	}
	return 0;
}
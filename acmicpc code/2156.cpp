#include <stdio.h>
int D[10001][3] = { { 0, }, };
int S[10001]= {  0, };
int max(int a,int b, int c) {
	if (a >= b && a >= c )
		return a;
	else if (b >= a && b >= c )
		return b;
	else if (c >= a && c >= b)
		return c;
//	else if (d >= a&&d >= b&&d >= c)
//		return d;
	else
		return -1;//error
}
int main(void) {
	int n;
	scanf("%d", &n);
	for (int j = 1; j <= n; j++) {
		scanf("%d", &S[j]);
	}
	D[1][0] = 0;
	D[1][1] = S[1];
	D[1][2] = S[1];
//	D[1][3] = S[1];
	for (int i = 2; i <= n; i++) {
		D[i][0] = max(D[i - 1][0], D[i - 1][1], D[i - 1][2]);
		D[i][1] = D[i - 1][0] + S[i];
		D[i][2] = D[i - 1][1] + S[i];
//		D[i][3] = D[i - 1][2] + S[i];
	}
		printf("%d\n", max(D[n][0], D[n][1], D[n][2]));
	
	return 0;
}
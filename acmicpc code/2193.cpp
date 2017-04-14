#include <stdio.h>
long long D[100][2] = { 0, };
int main(void) {
	int n;
	
	scanf("%d", &n);
	D[1][0] = 0;
	D[1][1] = 1;
	for (int i = 2; i <= n; i++) {
		D[i][0] = D[i - 1][0] + D[i - 1][1];
		D[i][1] = D[i - 1][0];
	}
	printf("%lld\n", D[n][0]+D[n][1]);
	return 0;
}
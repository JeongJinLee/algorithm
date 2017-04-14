#include <stdio.h>
int D[1001][10] = { 0, };
int main(void) {
	int n;
	
	scanf("%d", &n);
	for (int i = 0; i <= 9; i++) {
		D[1][i] = 1;
	}
	for (int i = 2; i <= n; i++) {
		for (int j = 0; j < 10; j++) {
			for (int k = 0; j + k < 10; k++) {
				D[i][j] = D[i][j] + D[i - 1][j+k];
			}
			D[i][j] %= 10007;
		}
	}
	int ans = 0;
	for (int i = 0; i < 10; i++) {
		ans += D[n][i];
	}
	printf("%d\n", ans%=10007);
	return 0;
}
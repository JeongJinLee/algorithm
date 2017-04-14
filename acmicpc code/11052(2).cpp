#include <stdio.h>
int D[1001] = { 0, };
int price[1001] = { 0, };
int main(void) {
	int n;
	
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &D[i]);
	}
	for (int i = 1; i <= n; i++) {
		int max = 0;
		for (int j = 1; j <= i; j++) {
			int temp = D[i - j] + D[j];
			if (temp > max)
				max = temp;
		}
		D[i] = max;
	}
	printf("%d\n", D[n]);
	return 0;
}
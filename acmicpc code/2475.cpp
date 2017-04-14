#include <stdio.h>

int main(void) {
	int n, ans = 0;

	for (int i = 0; i < 5; i++) {
		scanf("%d", &n);
		ans += (n*n);
	}
	printf("%d\n", ans%10);
	return 0;
}
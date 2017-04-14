#include <stdio.h>

int main(void) {
	int n, ans = 0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		int a, b;
		scanf("%d %d", &a, &b);
		ans += (b%a);
	}
	printf("%d\n", ans);
	return 0;
}
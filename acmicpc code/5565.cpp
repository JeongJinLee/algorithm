#include <stdio.h>

int main(void) {
	int n, ans = 0;
	scanf("%d", &ans);

	for (int i = 0; i < 9; i++) {
		scanf("%d", &n);
		ans -= n;
	}
	printf("%d\n", ans);
	return 0;
}
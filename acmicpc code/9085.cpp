#include <stdio.h>

int main(void) {
	int t;
	scanf("%d", &t);
	while (t--) {
		int n;
		scanf("%d", &n);

		int ans = 0;
		for (int i = 0; i < n; i++) {
			int temp;
			scanf("%d", &temp);
			ans += temp;
		}
		printf("%d\n", ans);
	}
	return 0;
}
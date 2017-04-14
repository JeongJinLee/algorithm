#include <stdio.h>

int main(void) {

	int n;
	scanf("%d", &n);
	int ans = 0;
	for (int i = 0; i < 5; i++) {
		int k;
		scanf("%d", &k);
		if (k  == n)
			ans++;
	}
	printf("%d\n", ans);

	return 0;
}
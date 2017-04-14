#include <stdio.h>
#include <string.h>
int main(void) {
	char a;
	int n;
	scanf("%d", &n);
	int ans = 0;
	scanf("%c", &a);
	for (int i = 0; i < n; i++) {
		scanf("%c", &a);
		ans += (a - 48);
	}
	printf("%d\n", ans);
	return 0;
}
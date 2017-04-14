#include <stdio.h>
int main(void) {
	int a, b, v;
	scanf("%d %d %d", &a,&b,&v);
	int ans = 0;
	int now = 0;
	while (true) {
		ans++;
		now += a;
		if (now >= v) {
			break;
		}
		now -= b;
	}
	printf("%d\n", ans);
	return 0;
}
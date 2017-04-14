#include <stdio.h>
int main(void) {
	int a, b, c;
	scanf("%d %d %d", &a,&b,&c);
	int ans;
	if (a == b &&a == c)
		ans = 10000 + a * 1000;
	else if (a == b&&a != c)
		ans = 1000 + a * 100;
	else if (a == c&&a != b)
		ans = 1000 + a * 100;
	else if (c == b&&a != c)
		ans = 1000 + c * 100;
	else if (a > b && a > c)
		ans = a * 100;
	else if (b > a && b > c)
		ans = b * 100;
	else if (c > b && c > a)
		ans = c * 100;
	printf("%d\n", ans);
	return 0;
}
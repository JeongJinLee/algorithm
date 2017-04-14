#include <stdio.h>
int main(void) {
	int n;
	int max = -1;
	scanf("%d", &n);
	while (n--) {
		int a, b, c;
		int hap = 0;
		scanf("%d %d %d", &a,&b,&c);
		if (a == b && b == c) {
			hap = 10000 + a * 1000;
		}
		else if (a == b&& a != c) {
			hap = 1000 + a * 100;
		}
		else if (a == c&&a != b) {
			hap = 1000 + a * 100;
		}
		else if (b == c&&a != b) {
			hap = 1000 + b * 100;
		}
		else {
			if (a > b && a > c)
				hap = a * 100;
			else if (b > a&&b > c)
				hap = b * 100;
			else if (c > a&&c > b)
				hap = c * 100;
		}
		if (max < hap)
			max = hap;
	}
	printf("%d\n", max);
	return 0;
}
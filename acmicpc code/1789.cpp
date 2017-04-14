#include <stdio.h>
int main(void) {
	long long n;
	scanf("%lld", &n);
	long long a = 0;
	for (int i = 1; i < 2400000000; i++) {
		a = a + i;
		if (a == n) {
			printf("%d\n", i);
			break;
		}
		else if (a > n) {
			printf("%d\n", i-1);
			break;
		}
	}


	return 0;
}
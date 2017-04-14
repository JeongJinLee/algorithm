#include <stdio.h>

int main(void) {
	long long n, m;

	scanf("%lld %lld", &n,&m);

	n = n - m;
	if (n > 0)
		printf("%lld\n", n);
	else {
		printf("%lld\n", n*(-1));
	}

	return 0;
}
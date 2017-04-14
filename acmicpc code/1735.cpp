#include <stdio.h>
int gcd(int m, int n, int reset = 1) {
	static int ncall = 0;
	if (reset)ncall = 0;
	ncall++;
	if (m%n == 0) {
		return n;
	}
	else return gcd(n, m%n, 0);
}
int main(void) {
	int a1, b1, a2, b2;
	scanf("%d %d", &a1, &b1);
	scanf("%d %d", &a2, &b2);
	int a, b;
	b = b1*b2;
	a = a1*b2 + a2*b1;
	while (int n = gcd(a, b)) {
		if (n == 1)
			break;
		a = a / n;
		b = b / n;
	}
	printf("%d %d\n", a,b);

	return 0;
}
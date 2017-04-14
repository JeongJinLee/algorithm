#include <stdio.h>
#include <math.h>
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
	int n, m,temp;
	int check = 1;
	scanf("%d %d", &n, &m);
	if (m < n)
	{
		temp = m;
		m = n;
		n = temp;
		check = 0;
	}
	int k = gcd(n, m);
	for (int i = 1; i < sqrt(k); i++) {
		if (n%i == 0 && m%i == 0) {
			if (check == 1)
			{
				printf("%d %d %d\n", i, n / i, m / i);
				printf("%d %d %d\n", k / i, n / (k / i), m / (k / i));
			}
			else {
				printf("%d %d %d\n", i, m / i,n / i);
				printf("%d %d %d\n", k / i, m / (k / i), n / (k / i));
			}
		}
	}
	int c = (int)sqrt(k)*(int)sqrt(k);
	if (c == k) {
		if(check==1)
			printf("%d %d %d\n", (int)sqrt(k), n / (int)sqrt(k), m / (int)sqrt(k));
		else
			printf("%d %d %d\n", (int)sqrt(k), m / (int)sqrt(k), n / (int)sqrt(k));
	}
		

	return 0;
}
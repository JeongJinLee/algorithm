#include <stdio.h>

unsigned long long FIBONACCI2(unsigned long long n);
unsigned long long FIB(unsigned long long n, unsigned long long acc1, unsigned long long acc2);
int main(void)
{
	unsigned long long n;
	unsigned long long i;
	unsigned long long value;

	scanf("%llu", &n);

		for (i = 0; i <= n; i++)
		{
			value = FIBONACCI2(i);
			if(i==n)
			printf("%llu\n", value);
		}
	return 0;
}

unsigned long long FIBONACCI2(unsigned long long n)
{
	unsigned long long F0 = 0, F1 = 1;

	return FIB(n, F0, F1);
}
unsigned long long FIB(unsigned long long n, unsigned long long acc1, unsigned long long acc2)
{
	if (n == 0)
		return acc1;

	return FIB(n - 1, acc2, acc1 + acc2);
}
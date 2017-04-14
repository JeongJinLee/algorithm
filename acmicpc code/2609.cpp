#include <stdio.h>

int main(void)
{
	int a, b;
	scanf("%d %d", &a, &b);
	int c, d;
	c = a;
	d = b;
	int mod = a % b;
	while (mod > 0)
	{
		c = d;
		d = mod;
		mod = c % d;
	}

	printf("%d\n%d\n", d,(a/d)*(b/d)*d);
	return 0;
}

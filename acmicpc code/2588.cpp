#include <stdio.h>
int arr[10000];
int main(void) {
	int n, m;
	int a, b, c, d;
	scanf("%d %d", &n, &m);
	int temp;
	temp = m % 10;
	a = n*temp;
	temp = (m / 10) % 10;
	b = n*temp;
	temp = (m / 100);
	c = n*temp;
	d = a + b * 10 + c * 100;
	printf("%d\n%d\n%d\n%d\n",a,b,c,d);
	return 0;
}
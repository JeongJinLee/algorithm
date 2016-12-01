#include <stdio.h>

int main(void) {
	int l, a, b, c, d;
	scanf("%d\n%d\n%d\n%d\n%d", &l,&a,&b,&c,&d);
	int temp1 = 0,temp2=0;
	temp1 = a / c;
	if (a%c != 0)
		temp1++;
	temp2 = b / d;
	if (b%d != 0)
		temp2++;
	printf("%d\n", (l-temp1<l-temp2)?l-temp1:l-temp2);
	return 0;
}
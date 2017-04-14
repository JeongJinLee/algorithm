#include <stdio.h>
int main(void) {
	int a, b;
	scanf("%d\n%d", &a,&b);
	int aa = 0, bb = 0;
	while (a != 0){
		aa = (aa * 10) + a % 10;
		a = a / 10;
	}
	while (b != 0){
		bb = (bb * 10) + b % 10;
		b = b / 10;
	}
	if (aa > bb)
		printf("%d\n", aa);
	else
		printf("%d\n", bb);
	return 0;
}
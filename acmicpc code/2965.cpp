#include <stdio.h>
int main(void) {
	int a, b, c;
	scanf("%d %d %d", &a,&b,&c);

	int t1, t2;
	t1 = b - a-1;
	t2 = c - b-1;
	printf("%d\n", (t1>t2)?t1:t2);
	return 0;
}
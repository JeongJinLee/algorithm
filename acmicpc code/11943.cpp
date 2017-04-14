#include<stdio.h> 
int main() {
	int a, b, c, d;
	scanf("%d %d\n%d %d", &a,&b,&c,&d);
	printf("%d\n", (a+d)>(b+c)?(b+c):(a+d));
	return 0;
}
#include <stdio.h> 
int main() {
	int a, b, c;
	scanf("%d %d %d", &a,&b,&c);
	int ans = 0;
	ans = a*b - c;
	if (ans < 0)
		ans = 0;
	printf("%d\n", ans);
	return 0;
}
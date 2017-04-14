#include <stdio.h>
int main(void) {
	int a, b, c,d,e,f,g,h;
	scanf("%d %d %d %d %d %d %d %d", &a,&b,&c,&d,&e,&f,&g,&h);
	int ans = 0;
	int max = 0;
	ans = ans + b;

	if (max < ans)
		max = ans;

	ans = ans - c + d;
	if (max < ans)
		max = ans;
	ans = ans - e + f;
	if (max < ans)
		max = ans;
	ans = ans - g;
	if (max < ans)
		max = ans;
	printf("%d\n", max);
	


	return 0;
}
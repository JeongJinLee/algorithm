#include <stdio.h>
int main(void) {
	
		int a, b,c;
		scanf("%d %d %d", &a,&b, &c);
		int ans = 0;
		if (a <= b && a <= c)
			ans = a;
		else if (b <= a && b <= c)
			ans = b;
		else if (c <= a && c <= b)
			ans = c;

		scanf("%d %d", &a,&b);
		ans += (a >= b) ? b : a;
		ans -= 50;
		printf("%d\n", ans);
	
}
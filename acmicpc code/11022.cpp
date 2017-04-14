#include <stdio.h>

int main(void)
{
	int x, y;
	int t;
	scanf("%d", &t);
	int n = 1;
	while (t--) {
		

		scanf("%d %d", &x, &y);
		
		printf("Case #%d: %d + %d = %d\n",n++, x,y,x + y);

	}
	return 0;
}
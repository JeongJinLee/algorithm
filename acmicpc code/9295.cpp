#include <stdio.h>
int main(void) {
	int n;
	
	scanf("%d", &n);
	int t = 1;
	while (n--) {
		int a, b;
		scanf("%d %d", &a,&b);
		printf("Case %d: %d\n", t++,a+b);
	}

	return 0;
}
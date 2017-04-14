#include <stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);
	int aa = 100, bb = 100;
	while (n--){
		int a, b;
		scanf("%d %d", &a,&b);
		if (a > b)
			bb -= a;
		else if (a < b)
			aa -= b;
		
	}
	printf("%d\n%d\n", aa,bb);
	return 0;
}
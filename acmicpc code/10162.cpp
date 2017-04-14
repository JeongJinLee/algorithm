#include <stdio.h>

int main(void) {
	
	int n;
	int a = 0, b = 0, c = 0;
	scanf("%d", &n);
	if (n % 10 != 0)
		printf("-1\n");
	else{
		a = n / 300;
		n = n % 300;
		if (n != 0){
			b = n / 60;
			n = n % 60;
			if (n != 0)
			{
				c = n / 10;
			}
		}
		printf("%d %d %d\n", a,b,c);
	}
	
	return 0;	
}
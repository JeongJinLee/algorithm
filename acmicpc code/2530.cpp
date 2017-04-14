#include <stdio.h>

int main(void){
	int a, b, c, d;
	scanf("%d %d %d", &a, &b, &c);
	scanf("%d", &d);
	c = d + c;
	
	if (c < 60){
		printf("%d %d %d\n", a,b,c);
	}
	else{
		int temp = c / 60;
		c = c % 60;
		b = b + temp;
		if (b < 60){
			printf("%d %d %d\n", a,b,c);
		}
		else{
			int temp2 = b / 60;
			b = b % 60;
			a = a + temp2;
			while (a >= 24)
				a = a - 24;
			printf("%d %d %d\n", a,b,c);
		}
	}

	return 0;
}
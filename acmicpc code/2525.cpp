#include <stdio.h>

int main(void){
	int a, b, c;
	scanf("%d %d", &a, &b);
	scanf("%d", &c);
	b = b + c;
	if (b < 60){
		printf("%d %d\n", a, b);
	}
	else{
		int temp = b / 60;
		a = a + temp;
		if (a >= 24){
			a = a - 24;
		}
		printf("%d %d\n", a,b%60);
	}
	return 0;
}
#include <stdio.h>

int main() {
	
	int n;
	int a = 0, b = 0;
	scanf("%d", &n);
	int temp = n;;
	a = n / 5;
	b = n % 5;
	int c = 0;
	if (b == 0) {
		printf("%d\n", a);
	}
	else if (b % 3 == 0) {
		printf("%d\n", a+b/3);
	}
	else {
		while (a) {
			b = b + 5;
			a--;
			if (b % 3 == 0) {
				printf("%d\n", a + b / 3);
				c = 1;
				break;
			}
		}
		if (c == 0)
			printf("-1\n");
	}
	
	return 0;
}
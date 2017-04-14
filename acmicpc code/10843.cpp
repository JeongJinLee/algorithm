#include <stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);
	if (n == 0)
		printf("0\n");
	while (n--) {
		int a, b;
		scanf("%d %d", &a,&b);
		if (n == 0) {
			if (b == 0)
				printf("1\n");
			else if (b == 1)
				printf("2\n");
			else if (b == 2)
				printf("0\n");
		}
	}
	
	return 0;
}

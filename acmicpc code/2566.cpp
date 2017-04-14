#include <stdio.h>
int main(void) {
	int max = 0;
	int temp;
	int a, b;
	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {
			scanf("%d", &temp);
			if (temp > max) {
				max = temp;
				a = i;
				b = j;
			}
		}
	}
	printf("%d\n%d %d\n", max,a,b);
	return 0;
}
#include <stdio.h> 
int main() {
	int a;
	scanf("%d", &a);
	while (a!=1) {
		for (int i = 2; i <= a; i++) {
 			if (a % i == 0) {
				printf("%d\n", i);
				a /= i;
				i--;
			}
		}
	}
	return 0;
}
#include <stdio.h>
int main(void) {
	while (true) {
		int a, b;
		scanf("%d %d", &a, &b);
		if (a == 0 && b == 0)
			break;
		printf("%d %d / %d\n", a/b ,a%b, b);
	}
	return 0;
}
#include <stdio.h>
int main(void) {
	while (true) {
		int a, b;
		scanf("%d %d", &a,&b);
		if (a == 0 && b == 0)
			break;
		if (a > b)
			printf("Yes\n");
		else
			printf("No\n");
	}
}
#include <stdio.h>

int main(void)
{
	int x, y;
	while (true) {
		
		scanf("%d %d", &x, &y);
		if (x == 0 && y == 0)
			break;
		printf("%d\n", x + y);

	}
	return 0;
}
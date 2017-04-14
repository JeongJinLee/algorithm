#include <stdio.h>

int main(void) {
	int n, ans = 0;

	for (int i = 0; i < 3; i++) {
		ans = 0;
		for (int j = 0; j < 4; j++) {
			scanf("%d", &n);
			if (n == 0)
				ans++;
		}
		if (ans == 0)
			printf("E\n");
		else
			printf("%c\n", ans+64);
	}
	return 0;
}
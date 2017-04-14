#include <stdio.h>
#include <string.h>
int main(void) {
	int t;
	scanf("%d", &t);
	while (t--) {
		
		char a[21], b[21];
		scanf("%s %s", a, b);
		int l = strlen(a);
		printf("Distances:");
		for (int i = 0; i < l; i++) {
			int ans = 0;
			if (b[i] >= a[i]) {
				ans = b[i] - a[i];
			}
			else if (b[i] < a[i]) {
				ans = b[i] + 26 - a[i];
			}

			printf(" %d", ans);
		}
		printf("\n");
	}

	return 0;
}
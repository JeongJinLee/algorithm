#include <stdio.h>

int main(void) {
	int t;
	scanf("%d", &t);

	while (t--) {
		int n,m,max=0;
		char name[21], ans[21];
		scanf("%d", &m);
		for (int j = 0; j < m; j++) {
			scanf("%d %s", &n, &name);
			if (n > max) {
				for (int i = 0; i < 21; i++)
					ans[i] = name[i];
				max = n;
			}
		}
		printf("%s\n", ans);
	}
	

	return 0;
}
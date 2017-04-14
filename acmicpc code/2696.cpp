#include <stdio.h>
#include <algorithm>

using namespace std;

int map[10000] = { 0, };
int center[10000] = { 0 , };
int main(void) {
	int t;
	scanf("%d", &t);
	while (t--) {
		for (int i = 0; i < 10000; i++) {
			map[i] = 0;
			center[i] = 0;
		}
		int m;
		scanf("%d", &m);
		for (int i = 0,j=0; i < m; i++) {
			scanf("%d", &map[i]);
			if (i % 2 == 0) {
				sort(map, map + i+1);
				center[j++] = map[i / 2];
			}
		}
		printf("%d\n", m/2+1);
		for (int i = 0; i < m / 2 + 1; i++) {
			printf("%d ", center[i]);
			if (i % 10 == 9)
				printf("\n");
		}
		printf("\n");
	}
	return 0;
}
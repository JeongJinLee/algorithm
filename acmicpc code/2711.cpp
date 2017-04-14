#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
int main(void) {
	int t;
	scanf("%d", &t);
	while (t--) {
		int a;
		char b[82];
		scanf("%d %s", &a, b);
		int l = strlen(b);
		for (int i = 0; i < l; i++) {
			if (i == a - 1)
				continue;
			else
				printf("%c", b[i]);
		}
		printf("\n");
	}
	return 0;
}
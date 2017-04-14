#include <stdio.h> 
#include <string.h>
char sik[100000];
int main() {
	int n;
	scanf("%d", &n);
	while (n--) {
		int r;
		scanf("%d", &r);
		scanf("%s", sik);
		int l = strlen(sik);
		for (int i = 0; i < l; i++) {
			for (int j = 0; j < r; j++) {
				printf("%c", sik[i]);
			}
		}
		printf("\n");
	}
	return 0;
}
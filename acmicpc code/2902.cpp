#include <stdio.h>
#include <string.h>
int main(void) {
	char c[101];
	scanf("%s", c);
	int l=strlen(c);
	for (int i = 0; i < l; i++) {
		if (c[i] >= 65 && c[i] <= 90)
			printf("%c", c[i]);
	}
	return 0;
}
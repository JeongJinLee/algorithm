#include <stdio.h>
#include <string.h>
int main(void) {
	char a[101];
	scanf("%s", a);
	int l = strlen(a);
	for (int i = 0; i < l; i++) {
		if (a[i] < 91)
			a[i] = a[i] + 32;
		else
			a[i] = a[i] - 32;
	}
	printf("%s", a);
	return 0;
}
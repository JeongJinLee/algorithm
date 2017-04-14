#include <stdio.h>
#include <string.h>
int main(void) {
	char a[101];
	scanf("%s", a);
	int l = strlen(a);
	printf("%d", l);
	return 0;
}
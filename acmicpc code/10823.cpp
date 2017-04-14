#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char a[10001];
char b[10001];
char* c;
long long ans;
int main(void) {
	while (1) {
		if (scanf("%s", b) == -1) break;
		strncat(a, b, strlen(b));
	}
	c = strtok(a, ",");
	while (c!=NULL) {
		ans+=atoi(c);
		c = strtok(NULL, ",");
	}
	printf("%lld\n", ans);
	return 0;
}
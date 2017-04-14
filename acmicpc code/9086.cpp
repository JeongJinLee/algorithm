#include <stdio.h>
#include <string.h>
int main() {
	int n;
	scanf("%d", &n);
	while (n--) {
		char a[1001];
		scanf("%s", a);
		int len = strlen(a);
		printf("%c%c\n", a[0],a[len-1]);
	}
}
	


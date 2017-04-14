#include <stdio.h>
#include <string.h>
int main(void) {
	int l;
	char a[101];
	scanf("%s", a);
	l = strlen(a);
	int ans = 0;
	for (int i = 0; i < l; i++) {
		if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u') {
			ans++;
		}
	}
	printf("%d\n", ans);
	return 0;
}
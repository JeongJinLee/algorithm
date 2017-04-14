#include<stdio.h> 
#include <string.h>
int main() {
	char a[1001];
	scanf("%s", a);
	int l = strlen(a);
	for (int i = 0; i < l; i++) {
		if (a[i] >= 68 && a[i] <= 90) {
			printf("%c", a[i]-3);
		}
		else {
			printf("%c", a[i]+23);
		}
	}
	return 0;
}
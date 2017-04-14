#include <stdio.h> 
#include <string.h>
int main() {
	char a[101];
	scanf("%s", a);
	int l = strlen(a);
	if (l == 1)
		printf("1\n");
	for (int i = 0; i < l / 2; i++) {
		if (a[i] != a[l - i - 1])
		{
			printf("0\n");
			break;
		}
		if (i == l / 2 - 1)
		{
			printf("1\n");
		}
	}
	return 0;
}
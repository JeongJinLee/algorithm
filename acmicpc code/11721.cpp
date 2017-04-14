#include <stdio.h>
#include <string.h>
int main(void) {
	char a[101];
	scanf("%s", a);
	int l = strlen(a);
	int k = 0;
	for (int i = 0; i < l; i=i+1) {
		
		printf("%c", a[i]);
		k++;
		if (k == 10)
		{
			printf("\n");
			k = 0;
		}
		
	}
	return 0;
}
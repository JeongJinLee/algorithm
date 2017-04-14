#include <stdio.h>
#include <string.h>
char arr[100];
int main(void) {
	int n;
	scanf("%d", &n);
	while (n--){
		scanf("%s", arr);
		int l = strlen(arr);
		if (arr[l - 1] % 2 == 0)
			printf("even\n");
		else
			printf("odd\n");
	}
	return 0;
}
#include <stdio.h> 
#include <string.h>
char arr[101];
int main() {
	int n;
	scanf("%d", &n);
	char t;
	scanf("%c", &t);
	scanf("%s", arr);//패턴
	while (n--) {
		char str[101]="";
		char str2[101]="";
		scanf("%s", str);
		char a[101], b[101];
		int l = strlen(arr);
		int c = 0;
		for (int i = 0, j = 0; i < l; i++, j++) {
			if (arr[i] == '*') {
				c = 1;
				a[j] = 0;
				j = -1;
				continue;
			}
			if (!c) {
				a[j] = arr[i];
			}
			else
			{
				b[j] = arr[i];
				b[j + 1] = 0;
			}
		}
		l = strlen(str);
		int l2 = strlen(a);
		int l3 = strlen(b);
		int cc = 1;
		for (int i = 0; i < l2; i++) {
			if (str[i] != a[i]) {
				cc = 0;
				break;
			}
			else {
				str[i] = 'A';
			}
		}
		for (int i = 0,j=l-1; i < l3; i++,j--) {
			if (str[j] != b[l3 - i - 1]) {
				cc = 0;
				break;
			}
		}
		if (cc == 1)
			printf("DA\n");
		else
			printf("NE\n");

	}
	return 0;
}
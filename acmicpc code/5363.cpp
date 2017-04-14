#include <stdio.h>
#include <string.h>

int main(void)
{
	int t;
	scanf("%d", &t);
	char temp;
	scanf("%c", &temp);
	while (t--) {
		char str[101];
		fgets(str, 100, stdin);
		int len = strlen(str);
		int cnt = 0;
		int check = 0;
		for (int i = 0; i < len-1; i++) {
			if (cnt == 2) {
				printf("%c", str[i]);
			}
			if (cnt < 2 && str[i] == ' ') {
				cnt++;
				check = i;
			}
		}
		if (cnt == 0) {
			printf("%s", str);
		}
		else if (cnt == 1) {
			printf("%s", str);
		}
		else {
			printf(" ");
			for (int i = 0; i < check; i++) {
				printf("%c", str[i]);
			}
			printf("\n");
		}
		
	}
	return 0;
}
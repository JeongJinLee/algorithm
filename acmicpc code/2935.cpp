#include <stdio.h> 
#include <string.h>
char a[101];
char b[101];
int main() {
	scanf("%s", a);
	char t;
	scanf("%c", &t);
	scanf("%c", &t);
	scanf("%s", b);
	int la, lb;
	la = strlen(a);
	lb = strlen(b);
	if (t == '*') {
		printf("1");
		for (int i = 0; i < la + lb - 2; i++)
			printf("0");
	}
	else if (t == '+') {
		if (la == lb) {
			printf("2");
			for (int i = 0; i < la - 1; i++) {
				printf("0");
			}
		}
		else if (la > lb) {
			printf("1");
			for (int i = 0; i < la - lb - 1; i++)
				printf("0");
			printf("1");
			for (int i = 0; i < lb - 1; i++)
				printf("0");
		}
		else if (la < lb) {
			printf("1");
			for (int i = 0; i < lb - la - 1; i++)
				printf("0");
			printf("1");
			for (int i = 0; i < la - 1; i++)
				printf("0");
		}
	}
	return 0;
}
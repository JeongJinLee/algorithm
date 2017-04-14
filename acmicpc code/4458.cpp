#include <stdio.h>
#include <string.h>
int main(void) {
	int t;
	scanf("%d", &t);
	char c;
	scanf("%c", &c);
	
	while (t--) {
		
		char a[32];
		fgets(a, 32, stdin);
		if (a[0] > 90)
			a[0] = a[0] - 32;
		printf("%s", a);
	}

	return 0;
}
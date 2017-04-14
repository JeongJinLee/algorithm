#include <stdio.h>
#include <string.h>

int main(void) {
	int l;
	char a[101];
	gets(a);
	l = strlen(a);
	for (int i = 0; i < l; i++){
		if (a[i] >= 65 && a[i] <= 77){
			printf("%c", a[i]+13);
		}
		else if (a[i]>77 && a[i] <= 90){
			printf("%c", a[i]-26+13);
		}
		else if (a[i] >= 97 && a[i] <= 109){
			printf("%c", a[i] + 13);
		}
		else if (a[i] > 109 && a[i] <= 122)
			printf("%c", a[i] - 26+13);
		else
			printf("%c", a[i]);
	}
	printf("\n");
	return 0;
}
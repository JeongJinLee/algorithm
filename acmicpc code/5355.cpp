#include <stdio.h> 
#include <string.h>
char sik[100000];
int main() {
	int n;
	scanf("%d", &n);
	while (n--) {
		double a = 0;
		char temp;
		scanf("%lf", &a);
		scanf("%c", &temp);//엔터처리
		fgets(sik, 100000, stdin);
		int l = strlen(sik);
		for (int i = 0; i < l; i++) {
			if (sik[i] == '@') {
				a *= 3;
			}
			else if (sik[i] == '%') {
				a += 5;
			}
			else if (sik[i] == '#') {
				a -= 7;
			}
			else {

			}
		}
		printf("%.2lf\n", a);
	}
	return 0;
}
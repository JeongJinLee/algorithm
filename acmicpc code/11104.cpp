#include <stdio.h>
int main(void) {
	int t;
	char c;
	scanf("%d", &t);
	scanf("%c", &c);
	while (t--) {
		char line[25];
		int ans = 0;
		
		for (int i = 0; i < 25;i++)
			scanf("%c", &line[i]);
		
		int a = 1;
		for (int i = 23; i >=0; i--) {
			ans = ans + (a*(line[i] - 48));
			a *= 2;
		}
		printf("%d\n", ans);
	}
	


	return 0;
}
#include <stdio.h>
char c[7][10] = { "","Yakk", "Doh", "Seh", "Ghar", "Bang","Sheesh" };
int main(void) {
	int t;
	int n = 1;
	scanf("%d", &t);
	while (t--) {
		
		int a, b;
		scanf("%d %d", &a, &b);
		printf("Case %d: ", n++);
		if (a == 1 && b == 1) {
			printf("Habb Yakk");
		}
		else if (a == 2 && b == 2) {
			printf("Dobara");
		}
		else if (a == 3 && b == 3) {
			printf("Dousa");
		}
		else if (a == 4 && b == 4) {
			printf("Dorgy");
		}
		else if (a == 5 && b == 5) {
			printf("Dabash");
		}
		else if (a == 6 && b == 6) {
			printf("Dosh");
		}
		else if ((a == 5 && b == 6)||(a == 6 && b == 5)) {
			printf("Sheesh Beesh");
		}
		else
			printf("%s %s", a>b?c[a]: c[b], a>b ? c[b] : c[a]);

		printf("\n");
	}
	return 0;
}
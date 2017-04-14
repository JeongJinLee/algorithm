#include <stdio.h> 
int main() {
	int n;
	scanf("%d", &n);
	int a = 0, b = 0;
	char t;
	scanf("%c", &t);

	for (int i = 0; i < n; i++) {
			scanf("%c",&t );
			if (t == 'A')
				a++;
			else if (t == 'B')
				b++;
	}
	if (a > b)
		printf("A\n");
	else if (a == b)
		printf("Tie\n");
	else
		printf("B\n");
	return 0;
}
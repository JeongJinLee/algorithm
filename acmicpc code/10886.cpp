#include <stdio.h>
int main(void) {
	int n;
	int a = 0, b = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int t;
		scanf("%d", &t);
		if (t == 1)
			a++;
		else
			b++;
	}
	if (a > b)
		printf("Junhee is cute!");
	else
		printf("Junhee is not cute!");
	return 0;
}
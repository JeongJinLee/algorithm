#include <stdio.h>
int main(void) {
	int n;
	int a = 1, b = 0;
	scanf("%d", &n);

	while (n--) {
		int t1, t2;
		t1 = b;
		t2 = a + b;
		a = t1;
		b = t2;
	}
	printf("%d %d\n",a,b);
	return 0;
}
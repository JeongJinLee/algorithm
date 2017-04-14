#include <stdio.h>
int main(void) {
	int n;
	scanf("%d", &n);
	int aa[5] = { 0, };
	while (n--){
		int a, b;
		scanf("%d %d", &a,&b);
		if (a == 0 || b == 0)
			aa[0]++;
		else if (a > 0 && b > 0)
			aa[1]++;
		else if (a < 0 && b>0)
			aa[2]++;
		else if (a < 0 && b < 0)
			aa[3]++;
		else if (a>0 && b < 0)
			aa[4]++;

	}
	printf("Q1: %d\nQ2: %d\nQ3: %d\nQ4: %d\nAXIS: %d\n", aa[1],aa[2],aa[3],aa[4],aa[0]);
	return 0;
}
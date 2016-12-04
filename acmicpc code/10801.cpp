#include <stdio.h>

int main(void) {
	int a[10], b[10];
	scanf("%d %d %d %d %d %d %d %d %d %d", &a[0],&a[1],&a[2],&a[3],&a[4],&a[5],&a[6],&a[7],&a[8],&a[9]);
	scanf("%d %d %d %d %d %d %d %d %d %d", &b[0], &b[1], &b[2],&b[3], &b[4], &b[5], &b[6], &b[7], &b[8], &b[9]);
	int s1 = 0, s2 = 0;
	for (int i = 0; i < 10; i++) {
		if (a[i] > b[i])
			s1++;
		else if (a[i] < b[i])
			s2++;
	}
	printf("%c\n",s1>s2?'A':(s1<s2)?'B':'D');
}
#include <stdio.h>
int main(void) {
	int hh1, hh2,mm1,mm2, ss1,ss2;
	scanf("%d:%d:%d", &hh1,&mm1,&ss1);
	scanf("%d:%d:%d", &hh2, &mm2, &ss2);
	if (hh1 == hh2 && mm1 == mm2 && ss1 == ss2) {
		printf("24:00:00\n");
		return 0;
	}
	int a, b, c;
	c = ss2 - ss1;
	if (c < 0) {
		mm2--;
		c += 60;
	}
	b = mm2 - mm1;
	if (b < 0) {
		hh2--;
		b += 60;
	}
	a = hh2 - hh1;
	if (a < 0) {
		a += 24;
	}
	printf("%02d:%02d:%02d\n", a,b,c);
	return 0;
}
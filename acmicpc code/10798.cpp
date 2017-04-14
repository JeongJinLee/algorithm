#include <stdio.h>

int main(void) {

	char a[16] = { 0, }, b[16] = { 0, }, c[16] = { 0, }, d[16] = { 0, }, e[16] = { 0, };
	scanf("%s", a);
	scanf("%s", b);
	scanf("%s", c);
	scanf("%s", d);
	scanf("%s", e);

	char n[100] = { 0, };
	int cnt = 0;
	for (int i = 0; i < 15; i++) {
		if (a[i] != 0)
			n[cnt++] = a[i];
		if (b[i] != 0)
			n[cnt++] = b[i];
		if (c[i] != 0)
			n[cnt++] = c[i];
		if (d[i] != 0)
			n[cnt++] = d[i];
		if (e[i] != 0)
			n[cnt++] = e[i];

	}
	n[cnt++] = 0;
	printf("%s\n", n);
	return 0;
}
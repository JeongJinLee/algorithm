#include <stdio.h>

int main(void) {
	char a;
	char b;
	scanf("%c%c", &a,&b);

	 double ans= 0.0;
	if (a == 'A')
		ans += 4;
	else if (a == 'B')
		ans += 3;
	else if (a == 'C')
		ans += 2;
	else if (a == 'D')
		ans += 1;
	else if (a == 'F')
		ans += 0;

	if (b == '+')
		ans += 0.3;
	else if (b == '0')
		ans += 0;
	else if (b == '-')
		ans -= 0.3;

	printf("%.1lf\n", ans);
	return 0;
}
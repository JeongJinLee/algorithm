#include <stdio.h>
#include <string.h>
char a[100001], b[100001];
int ans[100002] = { 0, };
int main(void) {
	scanf("%s", a);
	scanf("%s", b);
	int len1 = strlen(a);
	int len2 = strlen(b);
	int i = len1, j = len2;
	int carry = 0, carry2 = 0;;
	int p = 0;
	while (true) {
		if (len1 <= 0 || len2 <= 0)
			break;

		int temp = a[len1 - 1] + b[len2 - 1] - 48 - 48 + carry2;
		if (temp >= 10) {
			carry = 1;
			temp -= 10;
		}
		ans[p++] = temp;
		carry2 = carry;
		carry = 0;
		len1--;
		len2--;
	}

		int t = (len1 <= 0) ? len2 : len1;
		int c = (len1 <= 0) ? 2 : 1;
		for (int k = t; k > 0; k--) {
			if (c == 1)
			{
				ans[p++] += (a[k - 1] - 48+carry2);
			}
			else
			{
				ans[p++] += (b[k - 1] - 48+ carry2);
			}
			if (ans[p - 1] >= 10) {
				ans[p - 1] -= 10;
				carry2 = 1;
			}
			else {
				carry2 = 0;
			}
		}
		if ( carry2 == 1)
			ans[p++] = 1;

	for (int i = p - 1; i >= 0;i--)
		printf("%d", ans[i]);
	return 0;
}
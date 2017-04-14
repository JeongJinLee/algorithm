#include <stdio.h>
int main(void) {
	int a;
	int ans = 0;
	scanf("%d", &a);
	int cnt1 = 0, cnt2=0;
	for (int i = 1; i <= a; i++) {
		int j = i;
		while (true) {
			if (j % 2 != 0 && j % 5 != 0) {
				break;
			}
			if (j % 2 == 0) {
				cnt1++;
				j = j / 2;
			}
			if (j % 5 == 0) {
				cnt2++;
				j = j / 5;
			}
		}
	}
	printf("%d\n", (cnt1 > cnt2) ? cnt2:cnt1);
	return 0;
}
#include <stdio.h>
#include <string.h>
int main() {
	int n, t;
	scanf("%d %d", &n, &t);
	int sum = 0;
	int cnt = 0;
	while (n--) {
		int temp;
		scanf("%d", &temp);
		sum += temp;
		if (sum > t)
			break;
		cnt++;
	}
	printf("%d\n", cnt);
}
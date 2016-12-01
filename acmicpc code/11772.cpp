#include <stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	long long sum = 0;
	while (n--) {
		int temp;
		scanf("%d", &temp);
		int temp2 = temp % 10;
		temp = temp / 10;
		int temp3 = 1;
		for (int i = 0; i < temp2; i++)
			temp3 = temp3*temp;
		sum += temp3;
	}
	printf("%lld\n", sum);
}
#include <stdio.h>

int main(void) {
	int n, max = -2e9;
	int sum = 0;
	scanf("%d", &n);
	while (n--) {
		int temp;
		scanf("%d", &temp);
		sum += temp;
		if (max < sum)
			max = sum;
		
		if (sum < 0)
			sum = 0;
	}
	printf("%d\n", max);

	return 0;
}
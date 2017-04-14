#include <stdio.h>

int main() {
	
	int c;
	scanf("%d", &c);

	while (c--) {
		int n;
		scanf("%d", &n);
		int arr[1001];
		int sum = 0;
		for (int i = 0; i < n; i++) {
			scanf("%d", &arr[i]);
			sum += arr[i];
		}
		int cnt = 0;
		double avg = (double)sum / (double)n;
		for (int i = 0; i < n; i++)
			if (arr[i] > avg)
				cnt++;
		printf("%.3lf%\n",((double)cnt/(double)n)*100);
	}
	return 0;
}
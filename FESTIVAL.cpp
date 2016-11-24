#include <stdio.h>

int main() {
	int c, n, l;
	scanf("%d", &c);
	while (c--) {
		int arr[1001];
		scanf("%d %d\n", &n, &l);
		double min = 2e9;
		for (int i = 0; i < n; i++)
			scanf("%d", &arr[i]);
		for (int i = 0; i < n; i++) {
			int cnt = 0;
			int hap = 0;
			for (int j = i; j < n; j++) {
				cnt++;
				hap += arr[j];
				if (cnt < l) {
					continue;
				}
				else {
					double avg = (double)hap / cnt;
					if (avg < min)
						min = avg;
				}
			}
		}
		printf("%.10lf\n", min);
	}
	return 0;
}

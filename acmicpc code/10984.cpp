#include<stdio.h> 
int a[11];
double b[11];
int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int n;
		scanf("%d",&n);
		int cnt = 0;
		double cnt1 = 0.0;
		for (int i = 0; i < n; i++)
		{
			scanf("%d%lf", &a[i],&b[i]);
			cnt += a[i];
			cnt1 += (a[i] * b[i]);
		}
		printf("%d %.1lf\n", cnt,cnt1/cnt);
	}
	return 0;
}
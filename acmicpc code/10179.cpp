#include<stdio.h>
int arr[200001];

int main(void)
{
	int n;
	double a;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%lf", &a);
		printf("$%.2lf\n", a*0.8);
	}

	return 0;
}
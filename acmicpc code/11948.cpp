#include<stdio.h> 
#include <algorithm>

using namespace std;

int main() {
	int a[4], b[2];
	scanf("%d", &a[0]);
	scanf("%d", &a[1]);
	scanf("%d", &a[2]);
	scanf("%d", &a[3]);
	scanf("%d", &b[0]);
	scanf("%d", &b[1]);

	int total = 0;
	sort(a, a+4);
	sort(b, b+2);
	total = a[1] + a[2] + a[3] + b[1];

	printf("%d\n", total);
	return 0;
}
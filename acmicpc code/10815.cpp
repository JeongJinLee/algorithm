#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
int a[500001] = { 0, };
int search(int n,int s,int e) {
	int mid = (s+e)/2;
	if (s>=e) {
		if (a[s] == n)
			return 1;
		else return 0;
	}
	int result1=0,result2=0;
	if (a[mid] == n)
		return 1;
	else if(a[mid]>n)
	result1=search(n, s, mid-1);
	else if(a[mid]<n)
	result2=search(n, mid+1, e);
	if (result1 == 1 || result2 == 1)
		return 1;
	else
		return 0;
}
int main() {
	int n,m;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	sort(a, a + n);
	scanf("%d", &m);
	for (int i = 0; i < m; i++) {
		int temp;
		scanf("%d", &temp);
		printf("%d ", search(temp, 0,n-1));
	}
}
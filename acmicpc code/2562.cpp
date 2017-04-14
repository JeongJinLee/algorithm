#include <stdio.h>
#include <algorithm>
using namespace std;
int main(void) {
	
	int n,arr[9];

	for (int i = 0; i < 9; i++) {
		scanf("%d", &arr[i]);
	}
	int max=0, p;
	for (int i = 0; i < 9; i++) {
		if (arr[i] > max) {
			max = arr[i];
			p = i + 1;
		}
	}
	printf("%d\n%d\n", max,p);
			return 0;
}
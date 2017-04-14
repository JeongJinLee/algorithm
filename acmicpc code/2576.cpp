#include <stdio.h>
#include <algorithm>
using namespace std;
int arr[10];
int main(void) {

	int ans = 0;
	int min = 300;
	for (int i = 0; i < 7; i++){
		scanf("%d", &arr[i]);
		if (arr[i] % 2 == 1){
			ans += arr[i];
			if (arr[i] < min)
				min = arr[i];
		}
	}
	if (min == 300)
		printf("-1\n");
	else
		printf("%d\n%d\n", ans, min);
	return 0;
}
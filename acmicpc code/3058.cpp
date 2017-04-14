#include <stdio.h>
#include <algorithm>
using namespace std;
int main(void) {
	int t;
	scanf("%d", &t);
	
	while (t--){
		int a[7];
		int b[7];
		int j = 0;
		int ans = 0;
		for (int i = 0; i < 7; i++)
		{
			scanf("%d", &a[i]);
			if (a[i] % 2 == 0){
				b[j++] = a[i];
				ans += a[i];
			}
		}
		sort(b, b + j );
		printf("%d %d\n", ans,b[0]);
	}
	return 0;
}
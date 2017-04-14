#include<stdio.h> 
int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int n;
		scanf("%d", &n);
		printf("Pairs for %d:", n);
		int cnt = 0;
		for (int i = 1; i < n/2+1; i++) {
			int temp = n - i;
			if (i != temp) {
				if (cnt != 0)
					printf(",");
				printf(" %d %d", i,temp);
				cnt++;
			}
		}
		printf("\n");
	}
	return 0;
}
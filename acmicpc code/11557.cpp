#include<stdio.h> 
int a[101];
char b[101][21];
int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int n;
		int max = 0;
		int ptr = -1;
		scanf("%d",&n);
		for (int i = 0; i < n; i++) {
			scanf("%s%d", b[i],&a[i]);
			if (max < a[i]) {
				max = a[i];
				ptr = i;
			}
		}
		printf("%s\n", b[ptr]);
	}
	return 0;
}
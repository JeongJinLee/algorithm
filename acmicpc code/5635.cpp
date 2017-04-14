#include <stdio.h>
char name[101][16];
int d[101];
int m[101];
int y[101];
int max = 0, min = 0;
int main(void) {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		scanf("%s %d %d %d", name[i],&d[i],&m[i],&y[i]);
		if (y[i]>y[min]){
			min = i;
		}
		else if (y[i] == y[min]){
			if (m[i] > m[min]){
				min = i;
			}
			else if (m[i] == m[min]){
				if (d[i] > d[min])
					min = i;
			}
		}
		if (y[i]<y[max]){
			max = i;
		}
		else if (y[i] == y[max]){
			if (m[i] < m[max]){
				max = i;
			}
			else if (m[i] == m[max]){
				if (d[i] < d[max])
					max = i;
			}
		}
	}
	printf("%s\n%s\n", name[min],name[max]);
	return 0;
}
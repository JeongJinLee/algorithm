#include <stdio.h>
int arr[101];
int main(void){
	int n, t;
	while (true){
		scanf("%d", &n);
		if (n == 0)
			break;
		scanf("%d", &t);
		for (int i = 0; i < n; i++)
			arr[i] = 0;
		int ptr = 0;
		while (true){
			int temp = t / n;
			for (int i = 0; i < n; i++)
			{
				arr[ptr++] += temp;
				if (ptr >= n)
					ptr = 0;
			}
			temp = t%n;
			for (int i = 0; i < temp; i++)
			{
				arr[ptr++]++;
				if (ptr >= n)
					ptr = 0;
			}
			arr[ptr - 1] = arr[ptr];
			n--;
			ptr--;
			if (arr[0] == arr[n-1]){
				printf("%d %d\n", n,arr[0]);
				break;
			}
		}
			
	}

	return 0;
}

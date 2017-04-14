#include <stdio.h> 
int arr[11] = {1, 10,100,1000,10000,100000,1000000,10000000,100000000,1000000000 };
long long max = 0;
int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		max = 0;
		long long n,m;
		scanf("%lld", &n);
		long long ans = 0;
		
		int cnt = 0;
		for (int z = 0; z <= 9; z++) {
			if (n == arr[z]) {
				m = n;
				ans = 0;
				for (int i = 0;; i++) {
					long long k;
					k = m % 10;
					k = 9 - k;
					for (int j = 0; j < i; j++) {
						k *= 10;
					}
					ans += k;
					m = m / 10;
					if (m == 0)
						break;
				}
				//printf("z : %d, ans : %lld\n", z, ans);
				//if (max < ans*z) {
				//	max = ans*z;
				//}
				printf("%lld\n", ans*n);
				break;
			}
			if (n > arr[z] && n <arr[z+1]) {
				if (n > arr[z + 1] / 2) {
					m = arr[z+1]/2;
					ans = 0;
					for (int i = 0;; i++) {
						long long k;
						k = m % 10;
						k = 9 - k;
						for (int j = 0; j < i; j++) {
							k *= 10;
						}
						ans += k;
						m = m / 10;
						if (m == 0)
							break;
					}
					//printf("z : %d, ans : %lld\n", z, ans);
					//if (max < ans*z) {
					//	max = ans*z;
					//}
					printf("%lld\n", ans*(arr[z + 1] / 2));
					break;
				}
				else {
					m = n;
					ans = 0;
					for (int i = 0;; i++) {
						long long k;
						k = m % 10;
						k = 9 - k;
						for (int j = 0; j < i; j++) {
							k *= 10;
						}
						ans += k;
						m = m / 10;
						if (m == 0)
							break;
					}
					//printf("z : %d, ans : %lld\n", z, ans);
					//if (max < ans*z) {
					//	max = ans*z;
					//}
					printf("%lld\n", ans*n);
					break;
				}
			}
		}
		//printf("%lld\n", max);
	}
	return 0;
}
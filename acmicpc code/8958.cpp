#include <stdio.h>
#include <algorithm>
#include <string.h>
using namespace std;
int main(void) {
	char a[81];
	int t;
	scanf("%d", &t);
	fgets(a, 80, stdin);
	while (t--) {
		char in[81];
		fgets(in, 81, stdin);
		int l = strlen(in);
		int be = 0;
		int ans = 0;
		for (int i = 0; i < l; i++) {
			if (be == 0 && in[i] == 'O') {
				ans++;
				be = 1;
			}
			else if (be == 0 && in[i] == 'X') {
				be = 0;
			}
			else if (be >0 && in[i]=='O') {
				be++;
				ans += be;
			}
			else if (be > 0 && in[i] == 'X') {
				be = 0;
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}
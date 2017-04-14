#include <stdio.h>
#include <algorithm>
using namespace std;
int main(void) {
	
		int a[3];
		scanf("%d %d %d", &a[0],&a[1], &a[2]);
		sort(a, a + 3);
		char c[3];
		scanf("%c", &c[0]);
		scanf("%c %c %c", &c[0],&c[1],&c[2]);
		
//		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				if (c[j] == 'A')
				{
					printf("%d ", a[0]);
					c[j] = 'a';
				}
				else if (c[j] == 'B')
				{
					printf("%d ", a[1]);
					c[j] = 'a';
				}
				else if (c[j] == 'C')
				{
					printf("%d ", a[2]);
					c[j] = 'a';
				}
			}
	//	}
			return 0;
}
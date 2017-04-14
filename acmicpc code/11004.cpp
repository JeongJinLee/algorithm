#include <stdio.h>
#include <algorithm>
#include <vector>

using namespace std;
vector<int> c;
int main(void) {
	int a, b;
	scanf("%d %d", &a, &b);
	for (int i = 0; i < a; i++){
		int t;
		scanf("%d", &t);
		c.push_back(t);
	}
	nth_element(c.begin(), c.begin() + b-1, c.end());
	printf("%d\n", c[b-1]);
	return 0;
}
#include<stdio.h> 
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;
string arr[201];
int main() {
	int n;
	char t;
	for (int i = 1;; i++) {
		scanf("%d", &n);
		scanf("%c", &t);
		if (n == 0)
			break;

		for (int j = 0; j < n; j++) {
			getline(cin, arr[j]);
		}

		sort(arr, arr+n);
		printf("%d\n", i);
		for (int j=0; j < n; j++) {
			cout << arr[j] << endl;
		}
	}
	return 0;
}
#include <stdio.h>
int arr[10001];
int main(void) {
	int a, b;
	int ans = 0;
	scanf("%d %d", &a, &b);
	for (int i = 0; i < a; i++)
	{
		scanf("%d", &arr[i]);
//		if (b == arr[i])
//			ans++;
	}
	int first = 0, last = 0;
	int temp=arr[first];
	while (true) {
		if (last >= a||first>=a)
			break;

		if (temp == b)//현재 temp가 값이 같은경우 ++해줌
		{
			ans++;
			temp -= arr[first];
			first++;
		}
		else if (temp < b) {
			last++;
			temp += arr[last];
		}
		else if (temp > b) {
			temp -= arr[first];
			first++;
		}
	}
	printf("%d\n", ans);

	return 0;
}
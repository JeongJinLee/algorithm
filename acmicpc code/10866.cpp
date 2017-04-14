#include <stdio.h>
#include <deque>
using namespace std;
int main(void)
{
	deque<int> a;
	int n;
	scanf("%d", &n);
	while(n--){
		char input[20];
		scanf("%s", input);
		if (input[0] == 's'){
			printf("%d\n", a.size());
		}
		else if (input[0] == 'e')
			printf("%d\n", a.empty());
		else if (input[0] == 'f'){
			if (a.size() == 0){
				printf("-1\n");
				continue;
			}
			int temp = a[0];
			printf("%d\n", temp);
			//a.push_front(temp);
		}
		else if (input[0] == 'b'){
			if (a.size() == 0){
				printf("-1\n");
				continue;
			}
			int temp = a[a.size()-1];
			printf("%d\n", temp);
			//a.push_back(temp);
		}
		else if (input[1] == 'u'&&input[5] == 'f'){
			int temp;
			scanf("%d", &temp);
			a.push_front(temp);
		}
		else if (input[1] == 'u'&&input[5] == 'b'){
			int temp;
			scanf("%d", &temp);
			a.push_back(temp);
		}
		else if (input[1] == 'o'&&input[4] == 'f'){
			if (a.size() == 0){
				printf("-1\n");
				continue;
			}
			int temp = a[0];
			printf("%d\n", temp);
			a.pop_front();
			
		}
		else if (input[1] == 'o'&&input[4] == 'b'){
			if (a.size() == 0){
				printf("-1\n");
				continue;
			}
			int temp = a[a.size()-1];
			printf("%d\n", temp);
			a.pop_back();
			
		}
	}

	return 0;
}
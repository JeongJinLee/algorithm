#include <stdio.h>
#include <string.h>
int main() {
	int n;
	scanf("%d", &n);
	
	char temp;
	scanf("%c", &temp);//enter
	while (n--) {
		int cnt = 0;
		char line[51];
		scanf("%s", line);
		int len = strlen(line);
		int check = 0;
		for (int i = 0; i < len; i++) {
			if (line[i] == '(')
				cnt++;
			else if(line[i]==')')
				cnt--;
			if (cnt < 0) {
				check = 1;
				break;
			}
		}
		if (check == 1 || cnt!=0)
			printf("NO\n");
		else
			printf("YES\n");
	}
}
	


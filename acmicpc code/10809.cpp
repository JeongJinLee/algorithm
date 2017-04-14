#include <stdio.h>
#include <string.h>
int main(void)
{
	char alpa[101];
	char al[26];
	int i;
	for (i = 0; i < 26; i++)
		al[i] = -1;

	gets(alpa);

	for (i = 0; i < strlen(alpa); i++)
		if (al[alpa[i] - 97] == -1)
			al[alpa[i] - 97] = i ;

	printf("%d", al[0]);
	for (i = 1; i < 26; i++)
		printf(" %d", al[i]);
	printf("\n");
	return 0;
}
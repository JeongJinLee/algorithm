#include <stdio.h>
#include <string.h>
int main(void)
{
	char alpa[101];
	char al[26] = { 0, };
	int i;

	gets(alpa);

	for (i = 0; i < strlen(alpa); i++)
		al[alpa[i] - 97]++;

	printf("%d", al[0]);
	for (i = 1; i < 26; i++)
		printf(" %d", al[i]);
	printf("\n");
	return 0;
}
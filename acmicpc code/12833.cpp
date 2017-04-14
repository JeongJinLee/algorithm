#include <stdio.h>

int main(void)
{
	int a, b, c, temp;

	scanf("%d %d %d", &a, &b, &c);
	temp = a^b;
	for (int i = 0; i < c-1; i++)
	{
		temp = temp^b;
	}
	printf("%d\n",temp);
	return 0;
}
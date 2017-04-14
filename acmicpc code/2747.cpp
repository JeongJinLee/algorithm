#include <stdio.h>
#include <stdlib.h>

int FIBONACCI1(int n);
int FIBONACCI2(int n);
int FIBONACCI3(int n);
int FIB(int n, int acc1, int acc2);
int MUL(int A[], int B[]);
int POW(int A[], int n);
int main(void)
{
	int n, sequence;
	int i;
	int value;

//	printf("어떤 방법을 사용?\n");
//	printf("1 : Recursion\n");
//	printf("2 : Tail recursive\n");
//	printf("3 : Recursive squaring\n");
//	scanf("%d", &sequence);
	sequence = 2;
//	printf("몇 번째 수 : ");
	scanf("%d", &n);

if (sequence == 2)
	{
		for (i = 0; i <= n; i++)
		{
			value = FIBONACCI2(i);
			if(i==n)
			printf("%d\n", value);
			
		}
	}

return 0;
}

int FIBONACCI1(int n)
{
	if (n<2)
	{
		if (n == 0)
			return 0;
		if (n == 1)
			return 1;
	}
	else
		return FIBONACCI1(n - 1) + FIBONACCI1(n - 2);
}
int FIBONACCI2(int n)
{
	int F0 = 0, F1 = 1;

	return FIB(n, F0, F1);
}
int FIB(int n, int acc1, int acc2)
{
	if (n == 0)
		return acc1;

	return FIB(n - 1, acc2, acc1 + acc2);
}
int FIBONACCI3(int n)
{
	int A[3] = { 1,1,0 };

	if (n<2)
		return n;
	else
		return POW(A, n - 1);
}
int POW(int A[], int n)
{
	if (n == 1)
	{
		return *A;
	}
	else
	{
		if (n % 2 == 0)//짝수
		{

		}
		else//홀수
		{

		}
	}
}
int MUL(int A[], int B[])
{
	int set[3];

	set[0] = A[0] * B[0] + A[1] * B[1];
	set[1] = A[0] * B[1] + A[1] * B[2];
	set[2] = A[1] * B[1] + A[2] * B[2];

	return *set;
}
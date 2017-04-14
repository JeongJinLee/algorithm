#include <stdio.h>

int main(void)
{
		int test;
		int n,m;
		int i;
		int a,b;
		scanf("%d", &test);

		while(test)
		{
			if(test==0)
				break;

			test--;
			a=0;
			b=0;
			scanf("%d %d", &m, &n);

			printf("1\n");
			if(m%2==0 && n%2==0)
			{
			for(i=0;i<m*n;i++)
				{
					printf("(%d,%d)\n", a,b);
				//	if(a==0 && b==0)
				//	{
				//		a++;
				//	}
					if(a==0 && b!=0)
					{
						b--;
					}
					else if(b==n-1 && a==1)
					{
						a--;
					}
					else if((a==m-1 && b%2==0) || (a==1 && b%2==1))
					{
						b++;
					}
					else if( b%2==0)
					{
						a++;
					}
					else if(b%2==1)
					{
						a--;
					}
				}
			}
			else if(m%2==0)//행이짝수
			{
				for(i=0;i<m*n;i++)
				{
					printf("(%d,%d)\n", a,b);
				//	if(a==0 && b==0)
				//	{
				//		a++;
				//	}
					if(a==m-1 && b==n-1)
					{
						a=0;
						b=n-1;
					}
					else if(a==0 && b!=0)
					{
						b--;
					}
					else if((a==m-1 && b%2==0) || (a==1 && b%2==1))
					{
						b++;
					}
					else if( b%2==0)
					{
						a++;
					}
					else if(b%2==1)
					{
						a--;
					}
				}
			}
//			else if(n%2==0)//열이짝수
			else{
				for(i=0;i<m*n;i++)
				{
				printf("(%d,%d)\n", a,b);
				//	if(a==0 && b==0)
				//	{
				//		a++;
				//	}
					if(a==m-1 && b==n-1)
					{
					//	a=0;
						b=0;
					}
					else if(b==0 && a!=0)
					{
						a--;
					}
					else if((a%2==0 && b==n-1) || (a%2==1 && b==1))
					{
						a++;
					}
					else if( a%2==0)
					{
						b++;
					}
					else if(a%2==1)
					{
						b--;
					}
				}
			}

		}

		return 0;
}
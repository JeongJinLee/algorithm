#include <stdio.h>
int main(void) {
	int a, b, c, d, e, f, g, h,i,j,k,l,m,n,o,p,q,r,s,t;
	scanf("%d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h);
	scanf("%d %d %d %d %d %d %d %d", &i, &j, &k, &l, &m, &n, &o, &p);
	scanf("%d %d %d %d", &q, &r, &s, &t);
	int ans = 0;
	int max = 0;
	ans = ans + b;

	if (max < ans)
		max = ans;

	ans = ans - c + d;
	if (max < ans)
		max = ans;
	ans = ans - e + f;
	if (max < ans)
		max = ans;
	ans = ans - g+h;
	if (max < ans)
		max = ans;
	ans = ans - i + j;
	if (max < ans)
		max = ans;
	ans = ans - k + l;
	if (max < ans)
		max = ans;
	ans = ans - m + n;
	if (max < ans)
		max = ans;
	ans = ans - o + p;
	if (max < ans)
		max = ans;
	ans = ans - q + r;
	if (max < ans)
		max = ans;
	ans = ans - s + t;
	if (max < ans)
		max = ans;


	printf("%d\n", max);



	return 0;
}
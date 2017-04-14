#include <stdio.h> 
int main()
{
	int n = 3;
	while (n--) {
		int sh, sm, ss,eh,em,es;
		scanf("%d%d%d%d%d%d", &sh,&sm,&ss,&eh,&em,&es);
		int h, m, s;
		if (es - ss < 0) {
			s = es - ss + 60;
			em--;
		}
		else {
			s = es - ss;
		}
		if (em - sm < 0) {
			m = em - sm + 60;
			eh--;
		}
		else {
			m = em - sm;
		}
		h = eh - sh;
		printf("%d %d %d\n", h,m,s);

	}
	return 0;
}
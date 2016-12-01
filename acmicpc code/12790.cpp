#include <stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);
	while (n--) {
		int q, w, e, r, t, y, u, i;
		scanf("%d %d %d %d %d %d %d %d", &q,&w,&e,&r,&t,&y,&u,&i);
		int sum = 0;
		int hp, mp, ad, ap;
		hp = q + t;
		mp = w + y;
		ad = e + u;
		ap = r + i;
		if (hp < 1)
			hp = 1;
		if (mp < 1)
			mp = 1;
		if (ad < 0)
			ad = 0;
		sum = hp + 5 * mp + 2 * ad + 2 * ap;;
		printf("%d\n", sum);
	}

	return 0;
}
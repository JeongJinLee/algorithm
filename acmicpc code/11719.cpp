#include <stdio.h>

int main(void) {
	char in[101];
	while (true) {
		if(fgets(in, 100, stdin)==NULL)
			break;
		fputs(in, stdout);

	}
}
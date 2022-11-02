#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {

	char a[51], b[51];
	int alen, blen, tmp = 0, min = 50;
	scanf("%s %s", a, b);
	alen = strlen(a);
	blen = strlen(b);

	for (int i = 0; i <= blen - alen; i++) {
		tmp = 0;
		for (int j = i, k = 0; j < i + alen; j++, k++) {
			if (b[j] != a[k]) tmp++;
		}
		if(tmp < min) min = tmp;
	}
	printf("%d", min);
}	
#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
	int a[9] = { 0 }, b[9] = { 0 }, *p,*q;
	for (p = a; p < a + 9; p++) {
		scanf("%d", p);
	}

	for (p = a,q=b; p < a + 9; p++,q++) {
		for (int i = 0; i < 9; i++) {
			if (*p < a[i]) (*q)++;
		}
	}
	for (int i = 0; i < 9; i++) {
		if (b[i] == 0) {
			printf("%d\n", a[i]);
			printf("%d", i+1);
			break;
		}
	}
}
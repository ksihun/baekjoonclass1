#include <stdio.h>
#include<limits.h>
#include<string.h>
#include<stdlib.h>
#pragma warning (disable:4996)


int main() {
	int N, M, CN=0, CM=0;

	scanf("%d %d", &N, &M);

	for (int i = 0; i < 3; i++) {
		CN *= 10;
		CM *= 10;
		CN += N % 10;
		N /= 10;
		CM += M % 10;
		M /= 10;
	}

	if (CN > CM) printf("%d", CN);
	else printf("%d", CM);

}
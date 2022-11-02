#include <stdio.h>
#include<limits.h>
#include<string.h>
#include<stdlib.h>
#pragma warning (disable:4996)

int main() {
	int N;
	scanf("%d", &N);

	for (int i = 1; i < 10; i++) {
		printf("%d * %d = %d\n", N, i, N * i);
	}
}
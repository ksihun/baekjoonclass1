#include <stdio.h>
#include<limits.h>
#include<string.h>
#include<stdlib.h>
#pragma warning (disable:4996)

int main() {
	int A, B, C, D,tmp, num[10]={0};
	scanf("%d", &A);
	scanf("%d", &B);
	scanf("%d", &C);
	D = A * B * C;

	while (D) {
		tmp = D % 10;
		num[tmp]++;
		D /= 10;
	}
	for (int i = 0; i < 10; i++) {
		printf("%d\n", num[i]);
	}
}
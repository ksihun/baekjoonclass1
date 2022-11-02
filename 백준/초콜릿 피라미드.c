#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main() {
	long int N,R, C, white=0, black=0;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {

		scanf("%d %d", &R, &C);
		while (R != 0 && C != 0) {
			white += R * C + (R - 1) * (C - 1);
			black += (R - 1) * C + R * (C - 1);
			R--;
			C--;
		}
		printf("%ld %ld\n", white, black);
		white = 0;
		black = 0;

	}



}
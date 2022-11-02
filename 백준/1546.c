#include <stdio.h>
#include<limits.h>
#include<string.h>
#include<stdlib.h>
#pragma warning (disable:4996)


int main() {
	int N, max = 0, a, total = 0;
	double avg = 0;
	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%d", &a);
		if (a > max) max = a;
		total += a;
	}

	avg = 1.0* total / N;
	avg*= 100.0 / max;
	printf("%lf", avg);
}
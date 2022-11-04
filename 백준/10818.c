#include <stdio.h>
#include<limits.h>
#include<string.h>
#include<stdlib.h>
#pragma warning (disable:4996)

int main() {
	int N, tmp[1000001],max=-1e9,min=1e9;
	scanf("%d", &N);
	
	for (int i = 0; i < N; i++) {
		scanf("%d", &tmp[i]);
		if (tmp[i] > max) max = tmp[i];
		if (tmp[i] < min) min = tmp[i];
	}

	printf("%d %d", min, max);

}


#include <stdio.h>
#include<limits.h>
#include<string.h>
#include<stdlib.h>
#pragma warning (disable:4996)

int main() {
	int N, X, num[10000]={0};
	scanf("%d %d", &N,&X);
	for (int i = 0; i < N; i++) {
		scanf("%d", &num[i]);
		if (num[i] < X) printf("%d ", num[i]);
	}

	
}
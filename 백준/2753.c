#include <stdio.h>
#include<limits.h>
#include<string.h>
#include<stdlib.h>
#pragma warning (disable:4996)


int main() {
	int N;
	scanf("%d", &N);
	if (N % 400 == 0) printf("1");
	else if (N % 4 == 0 && N % 100 != 0) printf("1");
	else printf("0");
	
}
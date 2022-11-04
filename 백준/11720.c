#include <stdio.h>
#include<limits.h>
#include<string.h>
#include<stdlib.h>
#pragma warning (disable:4996)

int main() {
	int N,total=0;
	char ch[101];
	scanf("%d", &N);
	scanf("%s", ch);
	for (int i = 0; i < N; i++) {
		total += ch[i] - '0';
	}
	printf("%d", total);
}
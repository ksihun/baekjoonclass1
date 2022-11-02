#include <stdio.h>
#include<limits.h>
#include<string.h>
#include<stdlib.h>
#pragma warning (disable:4996)


int main() {
	int A, B;
	scanf("%d %d", &A, &B);
	if (A > B) printf(">");
	else if (A == B) printf("==");
	else printf("<");
}
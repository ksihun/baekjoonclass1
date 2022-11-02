#include <stdio.h>
#include<limits.h>
#include<string.h>
#include<stdlib.h>
#pragma warning (disable:4996)

int main() {
	int N, a,i,j,k;
	char S[21] = "", P[201] = "";
	scanf("%d", &N);

	for (i = 0; i < N; i++) {
		scanf("%d %s", &a,S);
		for (j = 0; j < strlen(S); j++) {
			for (k = 0; k < a; k++) {
				P[a*j + k] = S[j];
			}
		}
		P[a * (j-1) + k] = '\0';
		printf("%s\n", P);

	}
}
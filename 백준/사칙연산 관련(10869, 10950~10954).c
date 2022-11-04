#include <stdio.h>
#include<limits.h>
#include<string.h>
#include<stdlib.h>
#pragma warning (disable:4996)

//int main() {
//	int A, B;
//	scanf("%d %d", &A, &B);
//	printf("%d\n%d\n%d\n%d\n%d\n", A + B, A - B, A * B, A / B, A % B);
//}

int main() {
	int A, B;
	
	while(1) {
		scanf("%d %d", &A, &B);
		if (A==0 && B==0) return 0;
		printf("%d\n", A + B);

	}
}
#include <stdio.h>
#include<limits.h>
#include<string.h>
#include<stdlib.h>
#pragma warning (disable:4996)


int main() {
	int H, M;

	scanf("%d %d", &H, &M);
	M -= 45;
	if (M < 0) {
		M += 60;
		H--;
	}
	if (H < 0) H += 24;

	printf("%d %d", H, M);

}
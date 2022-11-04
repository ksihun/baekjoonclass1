#include <stdio.h>
#include<limits.h>
#include<string.h>
#include<stdlib.h>
#pragma warning (disable:4996)

int main() {

	char num[9] = "", as[9] = {'1','2','3','4','5','6','7','8'}, des[9] = {'8','7','6','5','4','3','2','1'};

	for (int i = 0; i < 8; i++) {
		scanf("%c", &num[i]);
		getchar();
	}
	
	if (strncmp(num, as, 8) == 0) printf("ascending");
	else if (strncmp(num, des, 8) == 0) printf("descending");
	else printf("mixed");
	


}
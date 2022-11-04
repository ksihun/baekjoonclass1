

#include <stdio.h>
#include<limits.h>
#include<string.h>
#include<stdlib.h>
#pragma warning (disable:4996)

int main() {
	int flag = 0;
	char str[101] = "";
	scanf("%s", str);

	for (int i = 0; i < 26; i++) {
		flag = 0;
		for (int j = 0; j < strlen(str); j++) {
			if (str[j] == 'a' + i) {
				printf("%d ", j);
				flag = 1;
				break;
			}
		}
		if (flag == 0) printf("-1 ");
	}
	
}
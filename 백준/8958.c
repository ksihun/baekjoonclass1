#include <stdio.h>
#include<limits.h>
#include<string.h>
#include<stdlib.h>
#pragma warning (disable:4996)

int main() {
	char ch[1001] = "",*p;
	int N, flag = 1, score = 0;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		flag = 1;
		score = 0;
		scanf("%s", ch);
		for (p = ch; p < ch+strlen(ch); p++) {
			if (*p == 'O') {
				score += flag;
				flag++;
			}
			else flag = 1;
		}
		printf("%d\n", score);
	}
	
}
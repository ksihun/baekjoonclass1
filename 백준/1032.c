#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
	char ch[50][51],result[51]="";
	char tmp;
	int N, len, cnt;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%s", ch[i]);
	}
	len = strlen(ch[0]);

	for (int i = 0; i < len; i++) {
		cnt = 0;
		tmp = ch[0][i];
		for (int j = 0; j < N; j++) {
			if (tmp == ch[j][i]) cnt++;
		}
		if (cnt == N) result[i] = tmp;
		else result[i] = '?';
		
	}
	printf("%s", result);
}
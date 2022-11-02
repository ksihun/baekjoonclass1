#include <stdio.h>
#include<limits.h>
#include<string.h>
#include<stdlib.h>
#pragma warning (disable:4996)


int main() {
	int cnt = 1;

	char ch[1000001] = "";
	gets(ch);
	for (int i = 0; i < strlen(ch)-1; i++) {
		if (ch[i] == ' ') cnt++;
	}

	if (ch[0] == ' ') cnt--;
	printf("%d", cnt);


}
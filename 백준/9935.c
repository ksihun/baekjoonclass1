#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {

	char ch1[1000001] = "", *p, ch2[1000001];
	char bomb[37] = "";
	scanf("%s", ch1);
	scanf("%s", bomb);
	int bomblen = strlen(bomb);


	for (p = ch1; p < ch1 + strlen(ch1); p++) {
		if (strncmp(p, bomb, bomblen) == 0) {
			*p = NULL;
			strcat(ch1, (p + strlen(bomb)));
			if (p - bomblen > ch1) p -= bomblen+1;
			else p = ch1;
		}

	}
	if (strncmp(ch1, bomb, bomblen) == 0) {
		ch1[0] = NULL;
		strcat(ch1, (p + strlen(bomb)));
	}

	if (strlen(ch1) != 0) printf("%s", ch1);
	else printf("FRULA");
}


		

#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
    char a[1001], ch[500500][1001]={0,}, *pch[500500];
    int plen=1, tmpcnt = 0, cnt = 0, flag = 0;
    scanf("%s", a);
    int alen = strlen(a);

    for (int i = 1; i <= alen; i++) {
        for (int j = 0; j < alen - i + 1; j++, tmpcnt++) {
            strncpy(ch[tmpcnt], &a[j], i);

        }
    }
 

    pch[0] = &ch[0][0];
    //printf("%s\n", pch[0]);
    for (int i = 0; i < tmpcnt; i++) {
        flag = 0;
        for (int j = 0; j < plen; j++) {
            if (strcmp(pch[j], &ch[i][0]) == 0) flag = 1;
        }
        if (flag == 0) {
            pch[plen] = ch[i];
            //printf("%s\n", pch[plen]);
            plen++;
        }

    }

    printf("%d", plen);
}
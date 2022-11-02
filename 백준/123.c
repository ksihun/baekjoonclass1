#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<limits.h>
#pragma warning(disable:4996)
int main() {
    int N, num;
    char a[51], ch;
    scanf("%s %d", a, &N);
    printf("%s", a);
    for (int i = 0; i < strlen(a); i++) {
        if (a[i] >= 'a' && a[i] <= 'z') a[i] -= N;
        else if (a[i] >= 'A' && a[i] <= 'Z') a[i] += N;
        else if (a[i] >= '1' && a[i] <= '9') {
            num = atoi(a + i);
            printf("%d", num);
            ch = 'A' + num;
            if (num >= 10) {
                if (N == 1) {
                    for (int j = i + 1; j < strlen(a); j++) a[j] = a[j + 1];
                    a[i] = ch;
                }
                else {
                    for (int j = strlen(a) - 1; j > i + 1; j++) a[j + N] = a[j];
                    for (int j = i; j < i + N; j++) a[j] = ch;
                }
                i++;
            }
            else {
                for (int j = strlen(a) - 1; j > i; j++) a[j + N] = a[j];
                for (int j = i; j < i + N; j++) a[j] = ch;
            }
        }
        else a[i] = ' ';
    }
    printf("%s", a);
}

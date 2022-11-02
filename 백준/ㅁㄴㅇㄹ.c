#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<limits.h>
#pragma warning(disable:4996)
int input(int *);
int sel_max(int *, int);
void out_max(int *, int *);
int main() {
    int a[100], N, max;
    N = input(a);
    max = sel_max(a, N);
    printf("\n%d", max);
}
int input(int *a) {
    int cnt = 0, N;
    while (1) {
        scanf("%d", &N);
        if (N == 0) break;
        else if (N < 0) continue;
        *a = N;
        a++;
        cnt++;
    }
    return cnt;
}
int sel_max(int *p, int N) {
    int cnt, max = 0, n;
    int *q = p, *start = p, *r = p;
    for (q = p; q < p + N; q++) {
        cnt = 0;
        if ((*q) % 2 == 1) {
            start = q;
            while (1) {
                if ((*q) % 2 == 0) break;
                cnt++;
                q++;
            }
            printf("%d ", cnt);
        }
        if (cnt > max) {
            max = cnt;
            r = start;
        }
    }
    printf("\n");
    out_max(r, r + max);
    return max;
}
void out_max(int *p, int *q) {
    int *r;
    for (r = p; r < q; r++) printf("%d ", *r);
}
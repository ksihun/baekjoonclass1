#include <stdio.h>
#include<limits.h>
#include<string.h>
#include<stdlib.h>
#pragma warning (disable:4996)

typedef struct student {
	int st, nd, rd, awesome;
}student;


int main() {
	int N;
	student ch[500000],*p,*q;
	scanf("%d", &N);

	for (p = ch; p < ch + N; p++) {
		scanf("%d", &p->st);
	}
	for (p = ch; p < ch + N; p++) {
		scanf("%d", &p->nd);
	}
	for (p = ch; p < ch + N; p++) {
		scanf("%d", &p->rd);
	}

	//Äü¼ÒÆ®

	//

}
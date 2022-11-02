#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)

int main() {
	int N, cnt = 0, max = 0;
	char a[1000][51], tmp[51],*p=a[0];
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%s", a[i]);
	}

	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			if (strcmp(a[i], a[j]) > 0) {
				strcpy(tmp, a[j]);
				strcpy(a[j], a[i]);
				strcpy(a[i], tmp);
			}
		}
	}

	for (int i = 0; i < N; i++) {
		cnt = 0;
		for (int j = 0; j < N; j++) {
			
			if (strcmp(a[i], a[j]) == 0) {
				cnt++;
			}

		}
		if (cnt > max) {
			max = cnt;
			p = a[i];
		}
		
	}
	printf("%s", p);
	
}


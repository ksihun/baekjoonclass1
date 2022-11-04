#include <stdio.h>
#include<limits.h>
#include<string.h>
#include<stdlib.h>
#pragma warning (disable:4996)


int main() {
	int a[10] = { 0 }, amod[10] = { 0 }, t = 0,flag;

	for (int i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
		amod[i] = a[i] % 42;
	}

	for (int i = 0; i < 10; i++) {
		flag = 0;
		for (int j = 0; j < i; j++) {
			if (amod[i] == amod[j]) flag++;
		}
		
		if (flag == 0) t++;
	}
	printf("%d", t);

}
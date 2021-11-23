#include<stdio.h>
#include<stdlib.h>

void inverse(int *b) {
	int t[3], i;
	for (i = 0; i < 3; i++) t[2 - i] = b[i];
	for (i = 0; i < 3; i++) b[i] = t[i];
}
int main() {
	int a[3] = { 3,5,7 },i;
	for (i = 0; i < 3; i++) printf("%d   ", a[i]);
	printf("\n");
	inverse(a);
	for (i = 0; i < 3; i++)printf("%d   ", a[i]);
	printf("\n");
	return 0;
}
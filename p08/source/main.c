#include<stdio.h>
#include<stdlib.h>
#define size 10

int main(void) {
	int n[size] = { 19,3,15,7,11,9,13,5,17,1 };
	int i, j;
	printf("%s%13s%17s\n", "Element", "Value", "Histogram");
	for (i = 0; i < size; i++) {
		printf("%7d%13d\t", i, n[i]);
		for (j = 1; j <=n[i]; j++) printf("%c", '*');
		printf("\n");
	}
	return 0;
}
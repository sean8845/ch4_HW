#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int i,n[10];
	for (i = 0; i < 10; i++)n[i] = 0;
	printf("%s%13s\n", "Element", "Value");
	for (i = 0; i < 10; i++) printf("%7d%13d\n", i, n[i]);
	return 0;
}
#include<stdio.h>
#include<stdlib.h>
#define size 12

int main(void) {
	int a[size] = { 1,3,5,4,7,2,99,16,45,67,89,45 },i,t=0;
	for (i = 0; i < size; i++) t += a[i];
	printf("Total of array element values is %d\n", t);
	return 0;
}
#include<stdio.h>
#include<stdlib.h>
#define size0 5

void modifyArray(int b[], int size);
void modifyElement(int e);

int main(void) {
	int a[size0]={ 0, 1, 2, 3, 4 };
	int i;
	printf("Effect of passing entire array by reference: \n\nThe values of the original array are:\n");
	for (i = 0; i < size0; i++) printf("%3d", a[i]);
	printf("\n");
	modifyArray(a, size0);
	printf("The values of the modified array are:\n");
	for (i = 0; i < size0; i++) printf("%3d", a[i]);
	printf("\n\n\nEffects of passing array element by value:\n\nThe value of a[3] is %d \n", a[3]);
	modifyElement(a[3]);
	printf("The value of a[3] is %d\n", a[3]);
	return 0;
}
void modifyArray(int b[], int size) {
	int j;
	for (j = 0; j < size; j++) b[j] *= 2;
}
void modifyElement(int e) {
	printf("Value in modifyElement is %d\n", e *= 2);
}
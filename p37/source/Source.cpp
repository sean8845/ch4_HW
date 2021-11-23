#include<stdio.h>
#include<stdlib.h>
#define aa 100

int linearSearch(const int array[], int key, int size);
int main() {
	int x, searchKey, element,a[aa];
	for (x = 0; x < aa ; x++) a[x] = 2 * x;
	printf("Enter integer search key:\n");
	scanf_s("%d", &searchKey);
	element = linearSearch(a, searchKey, aa);
	if (element != -1) printf("Found value in element %d \n", element);
	else printf("Value not found\n");
	return 0;
}
int linearSearch(const int array[], int key, int ss) {
	int n;
	for (n = 0; n < ss; ++n) {
		if (array[n] == key) return n;
	}
	return -1;
}
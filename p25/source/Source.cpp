#include<stdio.h>
#include<stdlib.h>

int addbyone(int& xref);

void main() {
	int x = 100;
	int y = addbyone(x);
	printf("x=%d\n", x);
}
int addbyone(int &xref) {
	xref++;
	printf("xptr=%d\n", xref);
	return xref;
}
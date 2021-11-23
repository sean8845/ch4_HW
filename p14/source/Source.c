#include<stdio.h>
#include<stdlib.h>

#define student 3
#define exam 4

int minm(const int grades[][exam], int p, int t);
int maxm(const int grades[][exam], int p, int t);
double avg(const int sg[], int t0);
void printarray(const int grades[][exam], int pupils, int test);

int main(void) {
	int stu;
	const int sg[student][exam] =
	{ {77,68,86,73},
	  {96,87,89,78},
	  {70,90,86,81} };
	printf("The array is:\n");
	printarray(sg, student, exam);

	printf("\n\nLowest grade: %d\nHighest grade: %d\n",
		minm(sg, student, exam),
		maxm(sg, student, exam));
	for (stu = 0; stu < student; stu++) {
		printf("The average grade for student %d is %.2f\n",stu, avg(sg[stu], exam));
	}
	return 0;
}
void printarray(const int grades[][exam], int pupils, int test) {
	int i, j;
	printf("               [0]  [1]  [2]  [3]");
	for (i = 0; i < pupils; i++) {
		printf("\nstudentGrade[%d]", i);
		for (j = 0; j < test; j++) 
			printf("%-5d", grades[i][j]);
	}
};
int minm(const int grades[][exam], int p, int t) {
	int i, j, lw = 100;
	for (i = 0; i < p; i++) {
		for (j = 0; j < t; j++)
			if (grades[i][j] < lw) lw = grades[i][j];
	}
	return lw;
};
int maxm(const int grades[][exam], int p, int t) {
	int i, j, h = 0;
	for (i = 0; i < p; i++) {
		for (j = 0; j < t; j++) {
			if (grades[i][j] > h) h = grades[i][j];
		}
	}
	return h;
};
double avg(const int sg[], int t) {
	int i;
	int total = 0;
	for (i = 0; i < t; i++) {
		total =total+ sg[i];
	}
	return (double)total / t;
};

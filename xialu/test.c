#include <stdio.h>
#include <math.h>
void func(int A[], int t, int len) {
	int i = 0;
 	//int len = sizeof(A)/sizeof(A[0]);
	int a = abs(t-A[0]);
	for (i = a; i < len; ) {
		if (t == A[i]) {
			printf("%d ", i);
			i = i+2;
		} else {
			a = abs(t-A[i]);
			i = i+a;
		}
	}
	/*
	for (i = 0; i < len;) {
		  if (t == A[i]) {
			printf("%d ", i);
			i = i+2;
		} else {
			i++;
		}
		*/
	printf("\n");
	return;
}

int main()
{
	int A[]= {4, 5, 6, 5, 4, 5, 6, 7, 8, 9, 10, 9, 8, 7};
	int t = 5;
	int len = sizeof(A)/sizeof(A[0]);
	func(A, t, len);	
	return 0;
}

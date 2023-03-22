#include<stdio.h>

int main(){
	int a=1, b = 131313255;
	int c = 233;
	int d;
	if((a=b))
	  printf("hello a =%d,&a=%d\n",a,&a);
	d = sizeof(a);
	printf("a= %d,d =%d\n",a,d);

	if((a = c))
	  printf("world a = %d,&a=%d\n",a,&a);

	return 0;
}

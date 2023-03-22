#include <stdio.h>

int main(){
	int a=2,b=2;
	if(++a ==3){
		a=0;
	}
	if(b++ ==3){
		b = 0;
	}
	printf("a:%d,b :%d\n",a,b);
}	

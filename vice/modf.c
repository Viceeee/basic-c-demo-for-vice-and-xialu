#include <stdio.h>
#include <math.h>
int main() {
	    float a=4.7, c;  //为变量赋初值
		    //int b = modf(a, &c);  //求3.1415的小数部分
		    double b;
				c = modf(a, &b);  //求3.1415的小数部分
			    printf("a: %f\n b: %d\n", a,(int) b);
				if (c >= 0.5){
					b=(int)b+1;
				  printf ("%d\n",(int)b);
				}else
					printf("%d\n",(int)b);

				    return 0;
}

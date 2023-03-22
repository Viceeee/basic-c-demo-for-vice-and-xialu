#include <stdio.h>
#include <string.h>
int main(){
	    char array[]={0};
	    int c, i, len;
		//len = strlen(array);
		for (i = 0; i < 5; i++) {
			array[i] = '1';
			printf("%c, len:%d \n", array[i], strlen(array));
		}
		//printf("\n");
		len = strlen(array);
		printf("array:%d\n", len);
		/*
	    scanf("%s",array);
	    c = strlen(array);
	   // printf("%c\n",array);
	    printf("%d\n",c);
        for(i = c; i > 0; i--){
		    printf("%c",array[i]);
	    }
	    printf("\n");
		*/
		return 0;
}

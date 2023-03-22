#include<stdio.h>
#include <string.h>



int count(char *data){
  int number = 0;//需要在外面，全局变量，
    int num = 0;
    char flag = '+';
    int stack[200]={0};
    int stack_pointer = 0;
    int i, result = 0;

    while(data[number]!='\0'){

        if((data[number] == '(')||(data[number] == '[')||(data[number] == '{')){
            number ++;
            num =  count(data);
        }

        while(isdigit(data[number])){
            num = num*10 + data[number] - '0';
            number++;
        }

        switch (flag)
        {
        case '+': 
            stack[stack_pointer++] = num; break;
        case '-':
            stack[stack_pointer++] = -num; break;
        case '*':
            stack[stack_pointer-1] *= num; break;
        case '/':
            stack[stack_pointer-1] /= num; break;
        default:break;
        }

        if ((data[number] == ')')||(data[number] == ']')||(data[number] == '}')){
            number++;
            break;
        }

        flag = data[number];
        number ++;
        num = 0;
       
    }
    for ( i = 0; i < stack_pointer; i++)
    {
        /* code */
        result += stack[i];
    }    
    return result;


}


int main(){
    int result = 0;
    char data[200];

    while(scanf("%s",data)!=EOF)
        result = count(data);
    
    printf("%d\n",result);
    return 0;
}
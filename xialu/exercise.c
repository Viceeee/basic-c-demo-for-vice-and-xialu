#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char* rev(char* s, int n, int len)
{
	char* ret = malloc(sizeof(char)*len);
    int i = 0;
    int k = 0;
	for (i = n; i < len; i++) {
	    ret[k++] = s[i];
	}
    for (i = 0; i < n; i++) {
        ret[k++] = s[i];
    }
	return ret;
}

int main()
{
	char s[] = "abcdefg";
	int n = 2;
	int len = strlen(s);
	char* ret = malloc(sizeof(char)*len);
	ret = rev(s, n, len);
	int k = 0;
	int i = 0;
	for (i = 0; i < len; i++) {
		printf("%c", ret[i]);
	}
	printf("\n");
	return 0;
}

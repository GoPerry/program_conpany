#include <stdio.h>
#include<stdlib.h>
#include<string.h>
void main(){
	char *a[]={"aaaaa","bbbbbb","ccccc","ddddd"};
	char **p=a;
	for(int i=0;i<4;i++)
	printf("%s\n,*p++");
}



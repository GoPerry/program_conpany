#include<stdio.h>
void  main(){
	int *str[]={"yuanwei","test"};
	int *ptr1,*ptr2,*ptr3;
	ptr1=str;
	ptr2=&str[2];
//	printf("ptr1=%p \n str=%p \n,*ptr1=%d \n ,&ptr1=%p\n",ptr1,str,*ptr1,&ptr1);

	printf("str=%p str[0]=%s\n",str,str[0]);



}

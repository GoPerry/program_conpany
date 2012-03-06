#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<malloc.h>
 typedef struct {
 
        int age ;
         char name[];
//	char *p; 
 
 }data;

void main()
{


data *cc;
cc=(data *)malloc (sizeof(data));
if(cc!=NULL){
	cc->age=20;
	strcpy(cc->name,"robot");
	//cc->p="yuanwei";
//printf("name=%s , p=%s,age=%d \n",cc->name,cc->p,cc->age);
printf("name=%s age=%d \n",cc->name,cc->age);
}
free(cc);

}

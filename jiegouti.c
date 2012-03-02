#include<stdlib.h>
#include<stdio.h>
#include<string.h>

#include<malloc.h>
 typedef struct {
 
        int age ;
         char name[];
 
 
 }data;

void main()
{


data *cc;
cc=(data *)malloc (sizeof(data));
if(cc!=NULL){
	cc->age=20;
	strcpy(cc->name,"robot");
printf("%s is  %d years old \n",cc->name,cc->age);
}
free(cc);

}

#include <stdio.h>
#include <string.h>

#include <stdlib.h>
typedef struct {
	char *name;

}tt;

void main(){

tt test1,test2;
	tt *p[]={&test1,&test2};
	//strcpy(p[0]->name," yuanwei");
	//strcpy(p[1]->name," zhangge");
	strcpy((*p[0]).name," yuanwei");
	strcpy((*p[1]).name," zhangge");
	printf("%s %s \n",p[0]->name,p[1]->name);
//	printf("%s %s %s \n",*p[0],*p[1],*p[2]);


}

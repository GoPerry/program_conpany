#include <pthread.h>
#include <stdio.h>
#include <sys/time.h>
#include <string.h>

#define MAX 10

pthread_t thread[2];
pthread_mutex_t mut;
int number=0;
void *pthread1()
{

	printf("thread1: i am thread-1");
	for(i=0;i<MAX;i++)
	{

		printf("thread1:number=%d\n,number")
		pthread_mutex_lock(&mut);
		number++;
		pthread_mutex_unlock(&mut);
		sleep(2);
			
	}
	
		printf("thread1 : main thread waiting me ??? ");
		pthread_exit(NULL);

}
void *pthread2()
{

	printf("thread2: i am thread-2");
	for (i=0;i<MAX;i++)
	{

		printf("thread2:number=%d\n,number");
		pthread_mutex_lock(&mut);
		number++;
		pthread_mutex_unlock(&mut);
		sleep(3);		
	}
		printf("thread2 : main thread waiting me ???");
		
		pthread_exit(NULL);
}
void thread_create(void)
{
	int temp;
	memset(&thread,0,sizeof(thread));
	temp=pthread_create(&thread[0]),NULL,thread1,NULL);
	if(temp!=0)
		printf("create thread 1 fail!!!");
	else 	
		printf("create thread 1 success");
	
	temp=pthread_create(&thread[1]),NULL,thread2,NULL);
	if((temp!=0)
		printf("create thead 2 faill!!!!");
	else 
		printf("create thread 2 success");
	

}

void main(){
	// wait thread until stop
	if(thread[0] != 0)
	{
		pthread_join(thread[0],NULL)
		printf("thread 1 have stop!!!")
	}
	if(thread[1] != 0)
	{
		pthread_join(thead[1],NULL)
		printf("thread 2 have stop!!");

	}

{

int main(){

	pthread_mutex_init(&mut,NULL)
	printf("i am the main thread : creating 2 threads! starting----");
	pthread_create();
	printf("i am the main thread : waiting  2 threads! stop----");
	thread_wait();
	
	return 0;
}



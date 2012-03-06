object=zhizhen.o 

CC=gcc
#flags 

CFLAGS = -g -Wall
LIBFLAGS=-lpthread

test-target:$(object)
	$(CC) -o $@ $(object) $(CFLAGS) $(LIBFLAGS)
zhizhen.o:zhizhen.c zhizhen.h
	$(CC) -c zhizhen.c	

.PHONY:clean
clean:
	rm test *.o


object=jiegouti.o

C_FLAGS=-g -Wall

LIBFLAGS=-lpthread

test-target:$(object)
	$(CC) -o $@  $(object) $(C_FLAGS) $(LIBFLAGS)
	@echo "make....."
jiegouti.o:jiegouti.c jiegouti.h
	$(CC) -c jiegouti.c
.PHONY:clean
clean:
	rm -f *.o *.obj test-target

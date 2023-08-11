CFLAGS= -Wall -g -lm
CC= gcc

index:index.c
	$(CC) $(CFLAGS) -o $@ $^

clean :
	rm -rf index


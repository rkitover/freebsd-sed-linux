CFLAGS=-std=c11 -include linux_compat.h

sed: compile.o main.o misc.o process.o strlcat.o strlcpy.o errc.o
	$(CC) -o sed $^

clean:
	rm -f *.o sed

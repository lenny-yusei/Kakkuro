OBJS=		kakkuro.o
CMD=		kakkuro.exe

CFLAGS+=	-Wall -Wextra -fopenmp
CC=			g++

build: $(OBJS)
	$(CC) $(CFLAGS) -o $(CMD) $(OBJS)

kakkuro.o: kakkuro.cpp
	$(CC) $(CFLAGS) -c kakkuro.cpp -o kakkuro.o

clean:
	del -f "$(CMD)"
	del -f *.o

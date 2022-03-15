CC = gcc
INC = -I./main.h
CFLAGS = -W -Wall -lpthread -lread
TARGET = C_Queue
OBJECTS = queue.o main.o
SRCS = queue.c main.c

all : $(TARGET)
	$(CC) -o $(TARGET) $(OBJECTS) $(INC)

$(TARGET) : 
	$(CC) -c $(SRCS) $(INC)

clean :
	rm -f $(TARGET)
		rm -f *.o

CC = gcc
INC = -I./linked.h
CFLAGS = -W -Wall -lpthread -lread
TARGET = s_linked
OBJECTS = single_list.o main.o
SRCS = single_list.c main.c

all : $(TARGET)
	$(CC) -o $(TARGET) $(OBJECTS) $(INC)

$(TARGET) : 
	$(CC) -c $(SRCS) $(INC)

clean :
	rm -f $(TARGET)
		rm -f *.o

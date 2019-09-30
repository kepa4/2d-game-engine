OBJS = src/*.hpp src/*.cpp 

CC = /usr/bin/g++ -std=c++0x

COMPILER_FLAGS = -w

LINKER_FLAGS = -lSDL2 -lSDL2_image

OBJ_NAME = main

all : $(OBJS)
	$(CC) -o $(OBJ_NAME) $(OBJS) $(LINKER_FLAGS)

windows : $(OBJS)
	x86_64-redhat-linux-g++ -std=c++0x -o main.exe $(OBJS) $(LINKER_FLAGS)

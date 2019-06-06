OBJS = *.hpp *.cpp 

CC = g++ -std=c++0x

COMPILER_FLAGS = -w

LINKER_FLAGS = -lSDL2

OBJ_NAME = main

all : $(OBJS)
	$(CC) $(OBJS) $(COMPILER_FLAGS) $(LINKER_FLAGS) -o $(OBJ_NAME)
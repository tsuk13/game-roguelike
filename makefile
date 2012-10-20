CPP = g++
CFLAGS = -Wall -Werror

all: source/test.cpp
	$(CPP) $(CFLAGS) -o build/test source/test.cpp

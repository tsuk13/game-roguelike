CPP = g++
CFLAGS = -Wall -Werror

build/test: source/test.cpp
	$(CPP) $(CFLAGS) -o build/test source/test.cpp

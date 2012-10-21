CPP = g++
CFLAGS = -Wall -Werror

build/test: source/test.cpp source/Entity.o
	$(CPP) $(CFLAGS) -o build/test source/test.cpp source/Entity.o
source/Entity.o: source/Entity.h source/Entity.cpp
	cd source
	$(CPP) $(CFLAGS) -c source/Entity.cpp

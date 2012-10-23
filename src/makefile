CPP = g++
CFLAGS = -Wall -Werror
BUILD = ../build

$(BUILD)/test: test.cpp Entity.o
	$(CPP) $(CFLAGS) -o $(BUILD)/test test.cpp Entity.o

Entity.o: Entity.h Entity.cpp
	$(CPP) $(CFLAGS) -c Entity.cpp

clean:
	rm *.o

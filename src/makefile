CPP = g++
CFLAGS = -Wall -Werror
BUILD = ../build

$(BUILD)/test: test.cpp Entity.o Enemy.o Player.o
	$(CPP) $(CFLAGS) -o $(BUILD)/test test.cpp Entity.o Enemy.o

Entity.o: Entity.h Entity.cpp
	$(CPP) $(CFLAGS) -c Entity.cpp

Enemy.o: Enemy.h Enemy.cpp Entity.o
	$(CPP) $(CFLAGS) -c Enemy.cpp

Player.o: Player.h Player.cpp Entity.o
	$(CPP) $(CFLAGS) -c Player.cpp

clean:
	rm *.o

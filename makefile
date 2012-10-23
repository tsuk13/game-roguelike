CPP = g++
CFLAGS = -Wall -Werror

build/test: src/test.cpp
	cd src; $(MAKE)

clean:
	rm build/*
	cd src; $(MAKE) clean

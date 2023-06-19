OBJECTS=ME-bigInt.o ME-main.o ME-algorythm.o
CFLAGS=-c
CNAME=-o $(BUILDFOLDER)$(NAME)
BUILDFOLDER=./build/
NAME=module-exponentiation
all: main

main: $(OBJECTS) ME-bigInt.hpp
	g++ $(OBJECTS) $(CNAME)

ME-main.o: ME-main.cpp ME-bigInt.hpp
	g++ $(CFLAGS) ME-main.cpp
ME-bigInt.o: ME-bigInt.cpp ME-bigInt.hpp
	g++ $(CFLAGS) ME-bigInt.cpp
ME-algorythm.o: ME-algorythm.cpp ME-bigInt.hpp
	gcc $(CFLAGS) ME-algorythm.cpp
	
clean:
	rm -rf $(OBJECTS) $(BUILDFOLDER)$(NAME)

rebuild: clean all
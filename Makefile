gcc_options = -std=c++20 -Wall --pedantic-errors 

blackjack : main.o deck.o
	g++ $(gcc_options) -o $@ $^
	
all.h.gch : all.h
	g++ $(gcc_options) -x c++-header -o all.h.gch $^

main.o : main.cpp
	g++ $(gcc_options) -c main.cpp
	
deck.o : deck.cpp
	g++ $(gcc_options) -c deck.cpp

clean :
	rm *.o *.h.gch
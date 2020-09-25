CFLAGS=-O3 -std=c++11

clean:
	rm -f Dealer.o PairWarMain.o Player.o pwm

all:
	g++ -O3 PairWarMain.cpp -o pwm	-std=c++11

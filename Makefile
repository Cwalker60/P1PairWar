CFLAGS=-O3 -std=c++11

clean:
	rm -f Dealer.o PairWarMain.o Player.o pwm

compile:
	g++ -O3 PairWarMain.cpp -o pwm -pthread -std=c++11

run:
	./pwm
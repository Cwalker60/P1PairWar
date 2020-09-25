CFLAGS=-O3 -std=c++11

clean:
	rm -f ALU.o CPU.o Memory.o Simulator.o simulator

all:
	g++ -O3 disassembler.cpp -o disassembler -std=c++11

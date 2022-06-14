.cpp.o:
	g++	-c $*.cpp

all:	ABB

ABB:  ABB.o cABB.o cNode.o
	g++ -o $@ $^

clean:
	rm *.o *.*~ ABB
CXX = g++
CXXFLAGS = -Wall

lab6: lab6.cpp PopcornBucket.o
	$(CXX) $(CXXFLAGS) lab6.cpp PopcornBucket.o -o lab6

PopcornBucket.o: PopcornBucket.cpp PopcornBucket.h
	$(CXX) $(CXXFLAGS) -c PopcornBucket.cpp

run:
	./lab6

clean:
	rm *~ *.o

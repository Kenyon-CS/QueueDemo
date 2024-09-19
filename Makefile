# Makefile for queue_demo

CXX = g++
CXXFLAGS = -Wall -std=c++11

# Target to compile the program
queue_demo: queue_demo.o
	$(CXX) $(CXXFLAGS) -o queue_demo queue_demo.o

# Compile the object file
queue_demo.o: queue_demo.cpp
	$(CXX) $(CXXFLAGS) -c queue_demo.cpp

# Clean up the compiled files
clean:
	rm -f *.o queue_demo

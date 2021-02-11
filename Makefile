CXX = g++
CXXFLAGS	= -std=c++17 -Wall
CXXTESTFLAGS = --coverage # can be used to generate files that help calculate unit test coverage
CXXGDB = -ggdb

all: test

clean:
	rm test # functions_to_implement.o (because you can't recompile this one!)

test: functions_to_implement.o test.cpp
	$(CXX) $(CXXFLAGS) test.cpp -o test

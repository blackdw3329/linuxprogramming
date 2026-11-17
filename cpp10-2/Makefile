CXX = g++
CXXFLAGS = -g -Wall
SRCS = box.cpp
OBJS = $(SRCS:.cpp=.o)

box: $(OBJS)
	$(CXX) $(OBJS) -o $@

%.o: %.cpp box.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

.PHONY: clean
clean:
	rm -f box $(OBJS)


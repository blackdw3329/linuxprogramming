CXX = g++
CXXFLAGS = -g -Wall
SRCS = 10_1_3.cpp
OBJS = $(SRCS:.cpp=.o)

10_1_3: $(OBJS)
	$(CXX) $(OBJS) -o $@

%.o: %.cpp 10_1_3.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

.PHONY: clean
clean:
	rm -f 10_1_3 $(OBJS)


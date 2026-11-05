
CXX = g++
CXXFLAGS = -std=c++17 -Wall

TARGET = main
OBJS = Shape.o Circle.o Rect.o Triangle.o
LIB = libshape.a

all: $(TARGET)

$(TARGET): main.o $(LIB)
	$(CXX) main.o $(LIB) -o $(TARGET)

$(LIB): $(OBJS)
	ar rcs $(LIB) $(OBJS)

%.o: %.cpp Shape.h
	$(CXX) $(CXXFLAGS) -c $< -o $@


.PHONY: clean
clean:
	rm -f *.o *.a $(TARGET)



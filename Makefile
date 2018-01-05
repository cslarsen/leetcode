CXXFLAGS := -Og --std=c++11 -W -Wall
TARGETS := $(patsubst %.cpp,%,$(wildcard *.cpp))

all: $(TARGETS)

clean:
	rm -f $(TARGETS)

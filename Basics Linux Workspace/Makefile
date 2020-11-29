appname := myapp
CXX := g++
CXXFLAGS := -Wall -g
srcfiles := $(shell find . -maxdepth 1 -name "*.cpp")
objects  := $(patsubst %.cpp, %.o, $(srcfiles))

#optionally can call warning via $(warning Alert Info)

all: $(appname)
$(appname): $(objects)
	$(CXX) $(CXXFLAGS) -o $(appname) $(objects)

clean:
	$(info Cleaning...)
	rm -f $(objects)

dist-clean: clean
	$(info Performing Dist-Wide clean up!)
	rm -f *~ .o
	rm -f myapp
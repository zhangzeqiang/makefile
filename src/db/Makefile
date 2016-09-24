SOURCE = $(wildcard *.cpp)
OBJS = $(patsubst %.cpp,%.o,$(SOURCE))

TOOLS = g++
ROOT = /home/git/source/pro/server/
VPATH = ${ROOT}include ~/source/pkg/boost_1_62_0/
CPPFLAGS = -I ${ROOT}include -lboost_system -g

.PHONY: all clean
all:${OBJS} 

%.o:%.cpp
	$(TOOLS) -c $< $(CPPFLAGS) 

clean:
	rm -f *.o

SOURCE = $(wildcard *.cpp)
OBJS = $(patsubst %.cpp,%,$(SOURCE))

TOOLS = g++
ROOT = /home/git/source/pro/server/
VPATH = ${ROOT}include ~/source/pkg/boost_1_62_0/
CPPFLAGS = -I ${ROOT}include -lboost_system -g

.PHONY: all clean
all:${OBJS} 

%:%.cpp
	$(TOOLS) -c $< -o $@ $(CPPFLAGS) 

clean:
	rm -f ${OBJS}

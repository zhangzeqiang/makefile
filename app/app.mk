SOURCE = $(wildcard *.cpp)
OBJS = $(patsubst %.cpp,%,$(SOURCE))
ROOT = /home/git/source/pro/server

LIBDIR = ${ROOT}/lib

GCC = g++
VPATH = ${ROOT}/include ~/source/pkg/boost_1_62_0/
CPPFLAGS = -I ${ROOT}/include -lboost_system -g
LIBFLAGS = -L ${LIBDIR}

.PHONY: all clean
all:${OBJS} 

%:%.cpp
	$(GCC) $< -o $@ $(CPPFLAGS) ${LIBFLAGS} ${LIBLINK}

clean:
	rm -f ${OBJS}

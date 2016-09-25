ROOT = /home/git/source/pro/server

SOURCE = $(wildcard *.cpp)
OBJS = $(patsubst %.cpp,%.o,$(SOURCE))
LIBDIR = ${ROOT}/lib

GCC = g++
AR = ar
ARFLAGS = -crv
VPATH = ${ROOT}/include ~/source/pkg/boost_1_62_0/
CPPFLAGS = -I ${ROOT}/include -lboost_system -g

.PHONY: all clean ${LIB}
all:${OBJS} ${LIB}

%.o:%.cpp
	$(GCC) -c $< $(CPPFLAGS) 

${LIB}:${OBJS}
	${AR} ${ARFLAGS} ${LIB} ${OBJS}	
	mv ${LIB} ${LIBDIR}/
clean:
	rm -f *.o ${LIB}

module := src app 

.PHONY:all ${module} clean
all: ${module}

${module}:
	${MAKE} --directory=$@ ${TARGET}
	

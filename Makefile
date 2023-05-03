
# Name of the binary
BINARY = factory
# Object files
OBJS   = factory.o machine.o machineA.o machineB.o main.o product.o
# Compiler flags
CFLAGS = -g -Werror -Wall
# Linker flags
LFLAGS = -g


# all target: builds all important targets
all: ${BINARY}


# Links binary
${BINARY} : ${OBJS}
	g++ ${LFLAGS} -o ${BINARY} ${OBJS}


# Compiles a source-file (any file with file extension .c) into an object-file
%.o : %.cpp
	g++ -c ${CFLAGS} -o $@ $<


# build and run
run: ${BINARY}
	./${BINARY}


# Delete all build artifacts
clean :
	rm -rf ${BINARY} ${OBJS}


# all  and clean are a "phony" targets, meaning they are no files
.PHONY : all clean
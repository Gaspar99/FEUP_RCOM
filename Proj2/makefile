# compiler
CCC = gcc

# C++ compiler flags (-g -O2 -Wall)
CCFLAGS = -g -O3 -Wall

# compile flags
LDFLAGS = -g

# source files
SRC = $(wildcard src/*.c)

# object files
OBJ = $(patsubst src%, buildtemp%.o, $(SRC))

# binary file
OUT = bin/ftpdownloader

.SUFFIXES: .c

default: $(OUT)

buildtemp/%.o: src/%
	mkdir -p buildtemp
	$(CCC) $(INCLUDES) $(CCFLAGS) -c $< -o $@

$(OUT): $(OBJ)
	mkdir -p bin
	$(CCC) $(INCLUDES) $(CCFLAGS) $(OBJ) $(LIBS) -o $(OUT)

clean:
	rm -f $(OBJ) $(OUT)

test:
	echo $(SRC)
	echo $(OBJ)

all:
	make
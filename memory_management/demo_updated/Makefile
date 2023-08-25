INCLUDE_DIR = include/
COMPILE_ARGS = -std=c++17 -Wall -Wextra -ffunction-sections -fdata-sections -Og -g -D TRACE_ENABLED 
SRC_FILES = src/*.cpp 
name = manage_memory
#

all: build

build: 
	g++ $(COMPILE_ARGS) -I$(INCLUDE_DIR) -o $(name) $(SRC_FILES)

debug: build
	gdb -ex 'break main' -ex 'info b' -ex 'set print pretty on' -ex 'run' $(name)

# test:
# 	g++ $(COMPILE_ARGS) -I$(INCLUDE_DIR) -o test $(SRC_FILES) test.cpp

# crp:
# 	g++ $(COMPILE_ARGS) -I$(INCLUDE_DIR) -o crp $(SRC_FILES) crp.cpp


run: $(name)
	./$(name)


clean:
	rm $(name)
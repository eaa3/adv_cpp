INCLUDE_DIR = include/
COMPILE_ARGS = -std=c++17 -Wall -Wextra -ffunction-sections -fdata-sections -Og -g -D TRACE_ENABLED 
SRC_FILES = *.cpp 
name = singleton

all: build

build: 
	g++ $(COMPILE_ARGS) -I$(INCLUDE_DIR) -o $(name) $(SRC_FILES)

debug: build
	gdb -ex 'break main' -ex 'info b' -ex 'set print pretty on' -ex 'run' $(name)

run: $(name)
	./$(name)


clean:
	rm $(name)
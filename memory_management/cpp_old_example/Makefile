
name = cpp_old_example

all: build

build:
	g++ -std=c++17 -Wall -Wextra -ffunction-sections -fdata-sections -Og -g -o $(name) $(name).cpp

dump: build
	objdump -h $(name) > objdump.txt

nmdump: build
	nm -n $(name)  
#> objdump.txt

clean:
	rm $(name) objdump.txt
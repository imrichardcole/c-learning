rm -rf build

mkdir build

gcc -c -o build/calculator.o calculator.c -std=c2x
gcc -c -o build/logger.o logger.c -std=c2x

ar rcs build/library.a build/calculator.o build/logger.o

gcc -o build/usage usage.c build/library.a

build/usage
.PHONY: all clean

all: bin/main

BUILD_SRC := ./build/src
BUILD_TEST := ./build/test


bin/main: $(BUILD_SRC)/main.o $(BUILD_SRC)/calculator.o
	gcc -Wall -Werror $(BUILD_SRC)/main.o $(BUILD_SRC)/calculator.o -o bin/main

$(BUILD_SRC)/main.o: src/main.c
	gcc -Wall -Werror -c src/main.c -o $(BUILD_SRC)/main.o

$(BUILD_SRC)/calculator.o: src/calculator.c
	gcc -Wall -Werror -c src/calculator.c -o $(BUILD_SRC)/calculator.o



test: bin/test_calculator

bin/test_calculator: $(BUILD_TEST)/calculator.o $(BUILD_TEST)/test_calculator.o $(BUILD_TEST)/main.o
	gcc -Wall -Werror $(BUILD_TEST)/calculator.o $(BUILD_TEST)/test_calculator.o $(BUILD_TEST)/main.o -o bin/test_calculator


$(BUILD_TEST)/test_calculator.o: test/test_calculator.c
	gcc -Wall -Werror -c -I thirdparty -I src test/test_calculator.c -o $(BUILD_TEST)/test_calculator.o

$(BUILD_TEST)/calculator.o: src/calculator.c
	gcc -Wall -Werror -c src/calculator.c -o $(BUILD_TEST)/calculator.o

$(BUILD_TEST)/main.o: test/main.c
	gcc -Wall -Werror -c -I thirdparty test/main.c -o $(BUILD_TEST)/main.o


run_tests: test
	bin/test_calculator


clean:
	rm -rf $(BUILD_SRC)/*.o $(BUILD_TEST)/*.o bin/main bin/test_calculator

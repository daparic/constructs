main: main.cpp Makefile
	g++ main.cpp -o main $$(pkg-config --cflags --libs gmock)

clean:
	@rm -f main *.o

.PHONY: clean

CXXFLAGS=g++ -std=c++14 -Wall

main: main.o
	$(CXXFLAGS) -o $@ $^
	./main

main.o:	main.cpp
	$(CXXFLAGS) -o $@ -c $<

clean:
	rm -rf *.o main
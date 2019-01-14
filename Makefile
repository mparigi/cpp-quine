verify: quine.cpp
	g++ -std=c++17 quine.cpp -o quine
	./quine > quine.out
	sdiff quine.out quine.cpp

clean:
	rm quine quine.out
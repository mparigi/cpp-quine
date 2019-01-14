verify: quine.cpp
	g++ quine.cpp -o quine
	./quine > quine.out
	sdiff quine.out quine.cpp

clean:
	rm quine quine.out
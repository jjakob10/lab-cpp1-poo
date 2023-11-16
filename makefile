main: main.o pessoa.o livro.o emprestimo.o
	g++ -std=c++17 -o main main.o pessoa.o livro.o emprestimo.o


main.o: main.cpp emprestimo.h
	g++ -std=c++17 -c -o main.o main.cpp


emprestimo.o: emprestimo.cpp emprestimo.h livro.h
	g++ -std=c++17 -c -o emprestimo.o emprestimo.cpp

livro.o: livro.cpp livro.h pessoa.h
	g++ -std=c++17 -c -o livro.o livro.cpp

pessoa.o: pessoa.cpp pessoa.h
	g++ -std=c++17 -c -o pessoa.o pessoa.cpp

clean:
	rm main
	rm *.o
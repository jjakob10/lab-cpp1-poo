#include <iostream>

#include "emprestimo.h"

using namespace std;

int main()
{
    Pessoa autor("João");
    Pessoa autor2("Helena");
    Livro livro("nome", autor);
    livro.insertMoreAutores(autor2);

    Pessoa pessoa("Pedro");
    Emprestimo e1(livro, pessoa);

    cout << e1.getLivro().getNome() << ": " << endl;
    for(Pessoa *autor : e1.getLivro().getAutores()){
       cout << "\t" << autor->getNome() << endl;
    }
    cout << "Emprestado para: " << e1.getPessoa().getNome() << endl;
    e1.getPessoa().setNome("Miguel");
    cout << "Pessoa mudou de nome para: " << e1.getPessoa().getNome() << endl;
    return 0;
}
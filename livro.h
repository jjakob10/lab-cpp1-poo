#if !defined(_LIVRO_H_)
#define _LIVRO_H_

#include <string>
#include <list>
#include "pessoa.h"


using namespace std;

class Livro
{
    string nome;
    list<Pessoa*> autores;

public:
    Livro(const string &nome, Pessoa &autor);
    void insertMoreAutores(Pessoa &autor);
    list<Pessoa*> getAutores() const;
    string getNome() const;
};

#endif // _LIVRO_H_

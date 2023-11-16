#if !defined(_EMPRESTIMO_H_)
#define _EMPRESTIMO_H_

#include <string>
#include "livro.h"
#include "pessoa.h"

using namespace std;

class Emprestimo
{
    Livro *livro;
    Pessoa *pessoa;

public:
    Emprestimo(Livro &livro, Pessoa &pessoa);
    Pessoa &getPessoa() const;
    Livro &getLivro() const;
};

#endif // _EMPRESTIMO_H_

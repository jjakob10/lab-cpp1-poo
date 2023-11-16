#if !defined(_PESSOA_H_)
#define _PESSOA_H_

#include <string>

using namespace std;

class Pessoa
{
    string nome;

public:
    Pessoa(){};
    Pessoa(const string &nome);
    string getNome() const;
    void setNome(string nome);
};

#endif // _PESSOA_H_

#include "livro.h"

Livro::Livro(const std::string &nome,Pessoa &autor) : nome(nome)
{
    this->insertMoreAutores(autor);
}

void Livro::insertMoreAutores(Pessoa &autor){
    this->autores.push_back(&autor);
}

std::string Livro::getNome() const
{
    return this->nome;
}

list<Pessoa*> Livro::getAutores() const
{
    return this->autores;
}
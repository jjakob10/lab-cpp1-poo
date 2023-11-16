#include "pessoa.h"

Pessoa::Pessoa(const std::string &nome) : nome(nome){

}

std::string Pessoa::getNome() const
{
    return this->nome;
}
void Pessoa::setNome(std::string nome)
{
    this->nome = nome;
}
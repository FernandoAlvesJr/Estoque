#include "Acessorio.h"

using std::cout;

Acessorio::Acessorio(const string &finalid, const string &orig, long codigo, const string &nome, int dia, int mes, int ano, float pCompra, float pVenda, int pts, const string &tipo, const string &tamanho)
:Imobilizado(finalid, orig, codigo, nome, dia, mes, ano, pCompra, pVenda, pts)
{
    tipo != "" ? this->tipo = tipo : this->tipo = "tipo";
    tamanho != "" ? this->tamanho = tamanho : this->tamanho = "tamanho";
}

Acessorio::Acessorio(const Acessorio &aces)
:Imobilizado()
{
    this->tipo = aces.tipo;
    this->tamanho = aces.tamanho;
}
Acessorio::~Acessorio()
{
    //dtor
}

string Acessorio::getTipo()
{
    return this->tipo;
}

void Acessorio::setTipo(const string &tipo)
{
    tipo != "" ? this->tipo = tipo : this->tipo = "tipo";
}

string Acessorio::getTamanho()
{
    return this->tamanho;
}

void Acessorio::setTamanho(const string &tamanho)
{
    tamanho != "" ? this->tamanho = tamanho : this->tamanho = "tamanho";
}

void Acessorio::mostrarInfo()
{
    cout << "\nCod: " << getCodigo();
    cout << "\nNome: " << getNome();
    cout << "\nTipo: " << this->tipo;
    cout << "\nTamanho: " << this->tamanho;
    cout << "\nData de Entrada: ";
    data.MOSTRADATA();
}

void Acessorio::mostrarOrigem()
{
    cout << "\nOrigem do Produto: " << getOrigem();
}

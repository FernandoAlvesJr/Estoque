#include "Financeiro.h"

using std::cout;
using std::endl;

float Financeiro::totalLucro = 0;
float Financeiro::totalReceita = 0;

Financeiro::Financeiro(float pComp, float pVenda)
{
    pComp >= 0 ? this->precoCompra = pComp : this->precoCompra = 0;
    pVenda >= 0 ? this->precoVenda = pVenda : this->precoVenda = 0;
}

Financeiro::~Financeiro()
{

}

float Financeiro::getPrecoCompra()
{
    return this->precoCompra;
}

void Financeiro::setPrecoCompra(float pCompra)
{
    pCompra >= 0 ? this->precoCompra = pCompra : this->precoCompra = 0;
}

float Financeiro::getPrecoVenda()
{
    return this->precoVenda;
}

void Financeiro::setPrecoVenda(float pVenda)
{
    pVenda >= 0 ? this->precoVenda = pVenda : this->precoVenda = 0;
}

void Financeiro::somaReceita(float valor)
{
    this->totalReceita += valor;
}

void Financeiro::somaLucro(float pCompra, float pVenda)
{
    this->totalLucro += (pVenda - pCompra);
}

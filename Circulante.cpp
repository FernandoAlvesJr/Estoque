#include "Circulante.h"

using std::cout;

int Circulante::quantidade = 0;

Circulante::Circulante(const string &finalid, const string &orig, long codigo, const string &nome, int pts, float pCompra, float pVenda, int dia, int mes, int ano)
:Produto(finalid, orig, codigo, nome, dia, mes, ano), pontos(pts), financ(pCompra,pVenda)
{
    incrementaCirculante();
}

Circulante::~Circulante()
{
    //dtor
}

void Circulante::incrementaCirculante()
{
    this->quantidade++;
}

void Circulante::decrementaCirculante()
{
    this->quantidade--;
}

void Circulante::mostraQtdCirculante()
{
    cout << "Voce possui "
         << this->quantidade
         << " produtos no estoque\n";
}

#include "Imobilizado.h"

int Imobilizado::quantidade = 0;

using std::cout;

Imobilizado::Imobilizado(const string &finalid, const string &orig, long codigo, const string &nome, int dia, int mes, int ano, float pCompra, float pVenda, int pts)
:Produto(finalid, orig, codigo, nome, dia, mes, ano, pCompra, pVenda, pts)
{
    //ctor
}

Imobilizado::~Imobilizado()
{
    //dtor
}

void Imobilizado::incrementaImobilizado()
{
    quantidade++;
}

void Imobilizado::decrementaImobilizado()
{
    quantidade--;
}

void Imobilizado::mostraQtdImobilizado()
{
    cout << "Voce tem "
         << quantidade
         << " produtos imobilizados";
}

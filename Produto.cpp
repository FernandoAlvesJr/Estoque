#include "Produto.h"

float Produto::totalReceita = 0;
float Produto::totalLucro = 0;

using std::cout;
using std::endl;

Produto::Produto(const string &finalid, const string &orig, long codigo, const string &nome, int dia, int mes, int ano, float pCompra, float pVenda, int pts)
:Insumo(finalid, orig), data(dia, mes, ano), financ(pCompra, pVenda), pontos(pts)
{
	codigo < 0 ? this->codigo = 0 : this->codigo = codigo;
	nome == "" ? this->nome = "produto" : this->nome = nome;
}

Produto::~Produto()
{

}

string Produto::getNome()
{
    return this->nome;
}

void Produto::setNome(const string &nome)
{
    nome != "" ? this->nome = nome : this->nome = "produto";
}

long Produto::getCodigo()
{
    return this->codigo;
}

void Produto::setCodigo(long cod)
{
    cod < 0 ? this->codigo = 0 : this->codigo = cod;
}

void Produto::alteraNome(const string &nome)
{
    nome != "" ? this->nome = nome : this->nome = this->nome;
}

void Produto::alteraProduto(long cod, const string &nome)
{
    cod < 0 ? this->codigo = 0 : this->codigo = cod;
    nome != "" ? this->nome = nome : this->nome = this->nome;
}

void Produto::somaReceita()
{
    totalReceita = totalReceita + financ.getPrecoVenda();
}

void Produto::MOSTRALUCRO()
{
    cout << "\n\nTotal de Lucro: R$ " << totalLucro << "\n" << endl;
}

void Produto::MOSTRARECEITA()
{
    cout << "\n\nTotal arrecadado de vendas: R$ " << totalReceita << "\n" << endl;
}

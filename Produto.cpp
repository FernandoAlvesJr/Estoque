#include "Produto.h"

Produto::Produto(const string &periodo , int dia, int mes, int ano, float precoCompra, float precoVenda, int pts, long codigo, const string &nome)
:Ciclo(periodo , dia, mes, ano, precoCompra, precoVenda, pts)
{
	codigo < 0 ? this->codigo = 0 : this->codigo = codigo;
	nome == "" ? this->nome = "produto" : this->nome = nome;
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

void Produto::alteraCodigo(long cod)
{
    this->codigo = cod;
}

void Produto::alteraProduto(long cod, const string &nome, const string &periodo)
{
    this->codigo = cod;
    this->nome = nome;
    this->periodo = periodo;
}


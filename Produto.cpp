#include "Produto.h"

float Produto::totalReceita = 0;
int Produto::totalPontos = 0;

using std::cout;
using std::endl;
using std::cin;

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

void Produto::MOSTRARECEITA() const
{
    cout << "\n\nTotal arrecadado de vendas: R$ " << totalReceita << "\n" << endl;
}

void Produto::situacaoPontos()
{
    cout << "Pontuacao do periodo:\n\n Objetivo: " << MINPONTOSCICLO << " pontos\n";
    cout << "Pontos alcancados: " << totalPontos;

    if (totalPontos < MINPONTOSCICLO)
    {
        cout << "\n\nVoce somou "
             << totalPontos
             << " pontos. Faltam "
             << MINPONTOSCICLO - totalPontos
             << " para o objetivo do periodo\n\n";
    }
    else
    {
        cout << "\n\nParabens! Voce atingiu o objetivo.\n\n";
    }
}

void Produto::somaPontos()
{
    totalPontos += this->pontos.getPontos();
}

void Produto::zeraPontos()
{
    int a;
    cout << "Tem certeza que deseja zerar a pontuacao do Periodo? (1 - sim ; 0 - nao): ";
    cin >> a;

    if (a == 1)
        this->totalPontos = 0;
    else
        cout << "\nOperacao Cancelada!\n";

}

void Produto::zeraReceita()
{
    totalReceita = 0;
}

#include "AcessoriosVenda.h"

using std::cout;

AcessoriosVenda::AcessoriosVenda(const string &finalid, const string &orig, long codigo, const string &nome, int pts, float pCompra, float pVenda, int dia, int mes, int ano, const string &linha, const string &tam)
:Circulante(finalid, orig, codigo, nome, pts, pCompra, pVenda, dia, mes, ano)
{
    linha != "" ? this->linha = linha : this->linha = "linha";
    tam != "" ? this->tamanho = tam : this->tamanho = "unico";
}

AcessoriosVenda::AcessoriosVenda(const AcessoriosVenda &av)
:Circulante()
{
    this->linha = av.linha;
    this->tamanho = av.tamanho;
}

AcessoriosVenda::~AcessoriosVenda()
{
    //dtor
}

string AcessoriosVenda::getLinha()
{
    return this->linha;
}

void AcessoriosVenda::setLinha(const string &linha)
{
    linha != "" ? this->linha = linha : this->linha = "linha";
}

string AcessoriosVenda::getTamanho()
{
    return this->tamanho;
}

void AcessoriosVenda::setTamanho(const string &tam)
{
    tam != "" ? this->tamanho = tam : this->tamanho = "unico";
}

void AcessoriosVenda::mostrarInfo()
{
    cout << "\nCod: " << getCodigo();
    cout << "\nNome: " << getNome();
    cout << "\nLinha: " << this->linha;
    cout << "\nTamanho: " << this->tamanho;
   // cout << "\n Preco de Compra: R$ " << financ.getPrecoCompra();
    //cout << "\n Preco de Venda: R$ " << financ.getPrecoVenda();
    //cout << "\n Pontuacao: " << pontos.getPontos();
    cout << "Data de Entrada: ";
    data.MOSTRADATA();
}

void AcessoriosVenda::mostrarOrigem()
{
    cout << "\nOrigem do Produto: " << getOrigem();
}

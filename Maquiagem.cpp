#include "Maquiagem.h"

using std::cout;

Maquiagem::Maquiagem(const string &finalid, const string &orig, long codigo, const string &nome, int pts, float pCompra, float pVenda, int dia, int mes, int ano, const string &tipo, const string &cor)
:Circulante(finalid, orig, codigo, nome, pts, pCompra, pVenda, dia, mes, ano)
{
    tipo != "" ? this->tipo = tipo : this->tipo = "tipo";
    cor != "" ? this->cor = cor : this->cor = "cor";
}

Maquiagem::Maquiagem(const Maquiagem &m)
:Circulante()
{
    this->tipo = m.tipo;
    this->cor = m.cor;
}

Maquiagem::~Maquiagem()
{
    //dtor
}

string Maquiagem::getTipo()
{
    return this->tipo;
}

void Maquiagem::setTipo(const string &tipo)
{
    tipo != "" ? this->tipo = tipo : this->tipo = "tipoMaquiagem";
}

string Maquiagem::getCor()
{
    return this->cor;
}

void Maquiagem::setCor(const string &cor)
{
    cor != "" ? this->cor = cor : this->cor = "corMaquiagem";
}

void Maquiagem::mostrarInfo()
{
    cout << "\nCod: " << getCodigo();
    cout << "\nNome: " << getNome();
    cout << "\nTipo: " << this->tipo;
    cout << "\nCor: " << this->cor;
    cout << "\n Preco de Compra: R$ " << financ.getPrecoCompra();
    cout << "\n Preco de Venda: R$ " << financ.getPrecoVenda();
    cout << "\n Pontuacao: " << pontos.getPontos();
    cout << "\nData de Entrada: ";
    data.MOSTRADATA();
}

void Maquiagem::mostrarOrigem()
{
    cout << "\nOrigem do Produto: " << getOrigem();
}

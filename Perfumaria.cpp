#include "Perfumaria.h"

using std::cout;

Perfumaria::Perfumaria(const string &finalid, const string &orig, long codigo, const string &nome, int pts, float pCompra, float pVenda, int dia, int mes, int ano, const string &gen, int vol)
:Circulante(finalid, orig, codigo, nome, pts, pCompra, pVenda, dia, mes, ano)
{
    gen != "" ? this->genero = gen : this->genero = genero;
    vol < 0 ? this->volume = vol : this->volume = 0;
}
Perfumaria::~Perfumaria()
{
    //dtor
}

string Perfumaria::getGenero()
{
    return this->genero;
}

void Perfumaria::setGenero(const string &gen)
{
    gen == "" ? this->genero = "genero" : this->genero = gen;
}

int Perfumaria::getVolume()
{
    return this->volume;
}

void Perfumaria::setVolume(int vol)
{
    vol < 0 ? this->volume = 0 : this->volume = vol;
}

void Perfumaria::mostrarInfo()
{
    cout << "\nCod: " << getCodigo();
    cout << "\nNome: " << getNome();
    cout << "\nGenero: " << this->genero;
    cout << "\nVolume: " << this->volume;
    cout << "\n Preco de Compra: R$ " << financ.getPrecoCompra();
    cout << "\n Preco de Venda: R$ " << financ.getPrecoVenda();
    cout << "\n Pontuacao: " << pontos.getPontos();
    cout << "Data de Entrada: ";
    data.MOSTRADATA();
}

void Perfumaria::mostrarOrigem()
{
    cout << "\nOrigem do Produto: " << getOrigem();
}


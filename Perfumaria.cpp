#include "Perfumaria.h"

using std::cout;

Perfumaria::Perfumaria(const string &periodo , int dia, int mes, int ano, float precoCompra, float precoVenda, int pts, long codigo, const string &nome, const string &gen, int vol)
:Produto(periodo, dia, mes, ano, precoCompra, precoVenda, pts, codigo, nome)
{
    gen != "" ? this->genero = gen : this->genero = genero;
    vol < 0 ? this->volume = vol : this->volume = 0;
}
Perfumaria::~Perfumaria()
{
    //dtor
}

string Perfumaria::getPeriodo()
{
    return this->periodo;
}

void Perfumaria::setPeriodo(const string &periodo)
{
    periodo != "" ? this->periodo = periodo : this->periodo = "";
}

void Perfumaria::trocaPeriodo(const string &novoPeriodo)
{
    if (novoPeriodo == getPeriodo())
    {
        cout << "Periodo informado igual ao anterior\n";
    }
    else if (novoPeriodo == "")
    {
        cout << "Periodo informado invalido\n";
    }
    else
    {
        setPeriodo(novoPeriodo);
    }
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

#include "Maquiagem.h"

using std::cout;

Maquiagem::Maquiagem(const string &periodo , int dia, int mes, int ano, float precoCompra, float precoVenda, int pts, long codigo, const string &nome, const string &tipo, const string &cor)
:Produto(periodo, dia, mes, ano, precoCompra, precoVenda, pts, codigo, nome)
{
    tipo != "" ? this->tipo = tipo : this->tipo = "tipo";
    cor != "" ? this->cor = cor : this->cor = "cor";
}

Maquiagem::Maquiagem(const Maquiagem &m)
//:Produto(periodo, dia, mes, ano, precoCompra, precoVenda, pts, codigo, nome)
{
    this->codigo = m.codigo;
    this->cor = m.cor;
}

Maquiagem::~Maquiagem()
{
    //dtor
}

string Maquiagem::getPeriodo()
{
    return this->periodo;
}

void Maquiagem::setPeriodo(const string &periodo)
{
    periodo != "" ? this->periodo = periodo : this->periodo = "";
}

void Maquiagem::trocaPeriodo(const string &novoPeriodo)
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

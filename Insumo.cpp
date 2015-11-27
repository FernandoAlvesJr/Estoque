#include "Insumo.h"

Insumo::Insumo(const string &finalid, const string &orig)
{
    finalid != "" ? this->finalidade = finalid : this->finalidade = "venda";
    orig != "" ? this->origem = orig : this->origem = "internet";
}

Insumo::~Insumo()
{
    //dtor
}

string Insumo::getOrigem()
{
    return this->origem;
}

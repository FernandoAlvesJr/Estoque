#include "Insumo.h"

Insumo::Insumo(const string &finalid)
{
    finalid != "" ? this->finalidade = finalid : this->finalidade = "venda";
}

Insumo::~Insumo()
{
    //dtor
}

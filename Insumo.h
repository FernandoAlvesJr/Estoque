#ifndef INSUMO_H
#define INSUMO_H

#include <iostream>
#include <string>

using std::string;

class Insumo
{
    public:
        Insumo(const string & = "venda");
        virtual ~Insumo();
        virtual void mostrarInfo() = 0;
        virtual void mostrarOrigem() = 0;

    private:
        string finalidade;
        string origem;
};

#endif // INSUMO_H

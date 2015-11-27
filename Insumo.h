#ifndef INSUMO_H
#define INSUMO_H

#include <iostream>
#include <string>

using std::string;

class Insumo
{
    public:
        Insumo(const string & = "venda", const string & = "internet");
        virtual ~Insumo();
        virtual void mostrarInfo() = 0;
        virtual void mostrarOrigem() = 0;
        string getOrigem();

    private:
        string finalidade;
        string origem;
};

#endif // INSUMO_H

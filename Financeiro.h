#ifndef FINANCEIRO_H
#define FINANCEIRO_H

#include <iostream>

class Financeiro
{
    public:
        Financeiro(float = 0, float = 0);
        Financeiro(const Financeiro &);
        ~Financeiro();
        float getPrecoCompra();
        void setPrecoCompra(float);
        float getPrecoVenda();
        void setPrecoVenda(float);


     protected:
        float precoCompra;
        float precoVenda;

};

#endif // FINANCEIRO_H

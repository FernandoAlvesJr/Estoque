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
        void somaReceita(float);
        void somaLucro(float, float);



     protected:
        float precoCompra;
        float precoVenda;
        static float totalReceita;
        static float totalLucro;
};

#endif // FINANCEIRO_H

#ifndef CIRCULANTE_H
#define CIRCULANTE_H

#include "Pontuacao.h"
#include "Financeiro.h"
#include "Produto.h"

class Circulante:public Produto
{
    public:
        Circulante(const string & = "venda", const string & = "internet", long = 0, const string & = "produto", int = 0, float = 0, float = 0, int = 1, int = 1, int = 2000);
        virtual ~Circulante();
        virtual void mostrarInfo() = 0;
        virtual void mostrarOrigem() = 0;
        void incrementaCirculante();
        void decrementaCirculante();
        void mostraQtdCirculante();


    protected:
        Pontuacao pontos;
        Financeiro financ;

    private:
        static int quantidade;
};

#endif // CIRCULANTE_H

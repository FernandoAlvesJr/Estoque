#ifndef CIRCULANTE_H
#define CIRCULANTE_H

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



    private:
        static int quantidade;
};

#endif // CIRCULANTE_H

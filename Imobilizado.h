#ifndef IMOBILIZADO_H
#define IMOBILIZADO_H

#include "Produto.h"

class Imobilizado : public Produto
{
    public:
        Imobilizado(const string & = "venda" , const string & = "internet" , long = 0, const string & = "produto", int = 1, int = 1, int =2000);
        virtual ~Imobilizado();
        virtual void mostrarInfo() = 0;
        virtual void mostrarOrigem() = 0;
        void incrementaImobilizado();
        void decrementaImobilizado();
        void mostraQtdImobilizado();
    protected:
    private:
        static int quantidade;
};

#endif // IMOBILIZADO_H

#ifndef ACESSORIOSVENDA_H
#define ACESSORIOSVENDA_H

#include "Circulante.h"

class AcessoriosVenda : public Circulante
{
    public:
        AcessoriosVenda(const string & = "venda", const string & = "internet", long = 0, const string & = "produto", int = 0, float = 0, float = 0, int = 1, int = 1, int = 2000, const string & = "linha", const string & = "unico");
        AcessoriosVenda(const AcessoriosVenda &);
        ~AcessoriosVenda();
        virtual void mostrarInfo();
        virtual void mostrarOrigem();
        string getLinha();
        void setLinha(const string &);
        string getTamanho();
        void setTamanho(const string &);
    protected:
    private:
        string linha;
        string tamanho;
};

#endif // ACESSORIOSVENDA_H

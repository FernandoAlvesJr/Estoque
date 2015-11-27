#ifndef ACESSORIO_H
#define ACESSORIO_H

#include "Imobilizado.h"

class Acessorio : public Imobilizado
{
    public:
        Acessorio(const string & = "venda" , const string & = "internet" , long = 0, const string & = "produto", int = 1, int = 1, int =2000, const string & = "tipo", const string & = "tamanho");
        Acessorio(const Acessorio &);
        virtual ~Acessorio();
        virtual void mostrarInfo();
        virtual void mostrarOrigem();
        string getTipo();
        void setTipo(const string &);
        string getTamanho();
        void setTamanho(const string &);

    private:
        string tipo;
        string tamanho;
};

#endif // ACESSORIO_H

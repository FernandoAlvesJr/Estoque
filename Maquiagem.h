#ifndef MAQUIAGEM_H
#define MAQUIAGEM_H

#include "Circulante.h"

class Maquiagem : public Circulante{
    public:
        Maquiagem(const string & = "venda", const string & = "internet", long = 0, const string & = "produto", int = 0, float = 0, float = 0, int = 1, int = 1, int = 2000, const string & = "tipo", const string & = "cor");
        Maquiagem(const Maquiagem &m);
        ~Maquiagem();
        virtual void mostrarInfo();
        virtual void mostrarOrigem();
		string getTipo();
		void setTipo(const string &tipo);
		string getCor();
		void setCor(const string &cor);

    private:
        string tipo;
        string cor;
};

#endif // MAQUIAGEM_H

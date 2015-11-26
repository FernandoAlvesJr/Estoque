#ifndef MAQUIAGEM_H
#define MAQUIAGEM_H

#include "Produto.h"

class Maquiagem : public Produto{
    public:
        Maquiagem(const string & = "periodo" , int = 1, int = 1, int =2000, float = 0, float = 0, int = 0, long = 0, const string & = "produto", const string & = "tipo", const string & = "cor");
        Maquiagem(const Maquiagem &m);
        ~Maquiagem();
        virtual string getPeriodo();
		virtual void setPeriodo(const string &p);
		virtual void trocaPeriodo(const string &);
		string getTipo();
		void setTipo(const string &tipo);
		string getCor();
		void setCor(const string &cor);

    private:
        string tipo;
        string cor;
};

#endif // MAQUIAGEM_H

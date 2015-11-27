#ifndef PERFUMARIA_H
#define PERFUMARIA_H

#include "Circulante.h"

class Perfumaria:public Circulante
{
    public:
        Perfumaria(const string & = "venda", const string & = "internet", long = 0, const string & = "produto", int = 0, float = 0, float = 0, int = 1, int = 1, int = 2000, const string & = "genero", int = 0);
        Perfumaria(const Perfumaria &);
        ~Perfumaria();
        virtual void mostrarInfo();
        virtual void mostrarOrigem();
		string getGenero();
		void setGenero(const string &gen);
		int getVolume();
		void setVolume(int vol);

    private:
        string genero;
        int volume;

};

#endif // PERFUMARIA_H

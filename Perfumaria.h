#ifndef PERFUMARIA_H
#define PERFUMARIA_H

#include "Produto.h"

class Perfumaria:public Produto
{
    public:
        Perfumaria(const string & = "periodo" , int = 1, int = 1, int =2000, float = 0, float = 0, int = 0, long = 0, const string & = "produto", const string & = "genero", int = 0);
        Perfumaria(const Perfumaria &);
        virtual ~Perfumaria();
        virtual string getPeriodo();
		virtual void setPeriodo(const string &p);
		virtual void trocaPeriodo(const string &);
		string getGenero();
		void setGenero(const string &gen);
		int getVolume();
		void setVolume(int vol);

    private:
        string genero;
        int volume;

};

#endif // PERFUMARIA_H

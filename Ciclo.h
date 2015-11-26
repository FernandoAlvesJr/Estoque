#include <string>
#include "Pontuacao.h"
#include "Financeiro.h"
#include "Data.h"

using std::string;

class Ciclo
{
    public:
        Ciclo(const string & = "default", int = 1, int = 1, int = 1, float = 0, float = 0, int = 0 );
        Ciclo(const Ciclo &);
        virtual ~Ciclo();
        virtual void setPeriodo(const string &) = 0;
        virtual string getPeriodo() = 0;
        virtual void trocaPeriodo(const string &) = 0;

    protected:
        Pontuacao pontos;
        Financeiro financ;
        Data data;
        string periodo;


};

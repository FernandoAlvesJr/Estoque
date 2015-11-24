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
        string buscaPeriodo(const string &);

    protected:
        Pontuacao pontos;
        Financeiro financ;
        Data data;

    private:
        string periodo;


};
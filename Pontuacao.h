#include <iostream>
#include <string>

using std::string;

class Pontuacao
{
    public:
        Pontuacao(int = 0);
        Pontuacao(const Pontuacao &);
        ~Pontuacao();
        int getPontos();
        void setPontos(int);
        void somaPontos(int);
        void vendaPontos(int);
        int pontosVendidos();
    private:
        int pontos;
        static int totalPontos;
        static int pontosPorVendas;
        const static int MINPONTOSCICLO = 600;
};

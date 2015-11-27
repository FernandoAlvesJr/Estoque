#ifndef PONTUACAO_H
#define PONTUACAO_H

#include <iostream>

class Pontuacao
{
    public:
        Pontuacao(int = 0);
        Pontuacao(const Pontuacao &p);
        ~Pontuacao();
        int getPontos();
        void setPontos(int);
        void somaPontos(int);
        void zeraPontos();
        int pontosVendidos();
        static void situacaoPontos();
    private:
        int pontos;
        static int totalPontos;
        const static int MINPONTOSCICLO = 600;
};


#endif // PONTUACAO_H

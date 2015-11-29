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

        int pontosVendidos();

    private:
        int pontos;

};


#endif // PONTUACAO_H

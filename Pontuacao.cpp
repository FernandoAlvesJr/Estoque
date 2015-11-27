#include "Pontuacao.h"

using std::cout;
using std::cin;

int Pontuacao::totalPontos = 0;

void Pontuacao::situacaoPontos()
{
    cout << "Pontuacao do periodo:\n\n Objetivo: " << MINPONTOSCICLO << " pontos\n";
    cout << "Pontos alcancados: " << totalPontos;

    if (totalPontos < MINPONTOSCICLO)
    {
        cout << "\n\nVoce somou "
             << totalPontos
             << " pontos. Faltam "
             << MINPONTOSCICLO - totalPontos
             << " para o objetivo do periodo\n\n";
    }
    else
    {
        cout << "\n\nParabens! Voce atingiu o objetivo.\n\n";
    }
}

Pontuacao::Pontuacao(int pts)
:pontos (pts)
{

}

Pontuacao::Pontuacao(const Pontuacao &p)
{
    this->pontos = p.pontos;
}

Pontuacao::~Pontuacao()
{

}

int Pontuacao::getPontos()
{
    return this->pontos;
}

void Pontuacao::setPontos(int pts)
{
    if((pts >= 0)&&(pts != this->pontos))
    {
        this->pontos = pts;
    }
}

void Pontuacao::somaPontos(int pts)
{
    this->totalPontos += pts;
}

void Pontuacao::zeraPontos()
{
    int a;
    cout << "Tem certeza que deseja zerar a pontuacao do Periodo? (1 - sim ; 0 - nao): ";
    cin >> a;

    if (a == 1)
        this->totalPontos = 0;
    else
        cout << "\nOperacao Cancelada!\n";

}

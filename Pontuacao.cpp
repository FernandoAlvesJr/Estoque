#include "Pontuacao.h"

using std::cout;
using std::cin;



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


#include "Pontuacao.h"

int Pontuacao::totalPontos = 0;

int Pontuacao::pontosPorVendas = 0;

Pontuacao::Pontuacao(int pts)
{
    pts < 0 ? this->pontos = 0 : this->pontos = pts;
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
    if(pts >= 0)
    {
        this->pontos = pts;
        somaPontos(pts);
    }
}

void Pontuacao::somaPontos(int pts)
{
    this->totalPontos += pts;
}

void Pontuacao::vendaPontos(int pts)
{
    this->pontosPorVendas += pts;
    this->totalPontos -= pts;
}

int Pontuacao::pontosVendidos()
{
    return this->pontosPorVendas;
}

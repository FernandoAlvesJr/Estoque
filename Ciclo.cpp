#include "Pontuacao.h"
#include "Financeiro.h"
#include "Data.h"
#include "Ciclo.h"

Ciclo::Ciclo(const string &periodo , int dia, int mes, int ano, float precoCompra, float precoVenda, int pts)
:data(dia, mes, ano), financ(precoCompra,precoVenda), pontos (pts), this->periodo(periodo)
{
	
}

Ciclo::Ciclo(const Ciclo &per)
{
	this->periodo = per.periodo;
}

string Ciclo::buscaPeriodo()
{
	
}

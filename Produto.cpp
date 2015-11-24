#include "Produto.h"

Produto::Produto(const string &periodo , int dia, int mes, int ano, float precoCompra, float precoVenda, int pts, long codigo, const string &nome)
:Ciclo(periodo , dia, mes, ano, precoCompra, precoVenda, pts)
{
	
}

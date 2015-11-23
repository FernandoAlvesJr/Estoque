#include "Data.h"

using std::cout;
using std::endl;

Data::Data(int dia, int mes, int ano)
{
	(dia > 0 && dia <= 31) ? this->dia = dia : this->dia = 0;
	(mes > 0 && mes <= 12) ? this->mes = mes : this->mes = 0;
	(ano > 2000 && ano < 2100) ? this->ano = ano : this->ano = 0;
}

Data::Data(const Data &copyData)
{
	this->dia = copyData.dia;
	this->mes = copyData.mes;
	this->ano = copyData.ano;
}

void Data::MOSTRADATA()
{
	cout << this->dia
		 <<"/"
		 <<this->mes
		 <<"/"
		 <<this->ano
		 <<endl;
}

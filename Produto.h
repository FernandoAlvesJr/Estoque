#ifndef PRODUTO_H
#define PRODUTO_H

#include <vector>
#include "Insumo.h"
#include "Data.h"

class Produto : public Insumo{
	public:
		Produto(const string & = "venda" , const string & = "internet" , long = 0, const string & = "produto", int = 1, int = 1, int =2000);
		Produto(const Produto &p);
		virtual ~Produto();
		virtual void mostrarInfo() = 0;
        virtual void mostrarOrigem() = 0;
		string getNome();
		void setNome(const string &);
		long getCodigo();
		void setCodigo(long);
		void alteraNome(const string &);
		void alteraProduto(long, const string &);

	protected:
		Data data;

    public:
        long codigo;
		string nome;

};

#endif // PRODUTO_H

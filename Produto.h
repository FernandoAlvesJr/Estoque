#ifndef PRODUTO_H
#define PRODUTO_H

#include <vector>
#include "Insumo.h"
#include "Data.h"
#include "Financeiro.h"
#include "Pontuacao.h"

class Produto : public Insumo{
	public:
		Produto(const string & = "venda" , const string & = "internet" , long = 0, const string & = "produto", int = 1, int = 1, int =2000, float = 0, float = 0, int = 0);
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
		void somaReceita();
		void zeraReceita();
		void MOSTRARECEITA() const;
        void somaPontos();
        void zeraPontos();
        static void situacaoPontos();


	protected:
		Data data;
		Financeiro financ;
		Pontuacao pontos;

    private:
        long codigo;
		string nome;
		static float totalReceita;
		static int totalPontos;
        const static int MINPONTOSCICLO = 600;

};

#endif // PRODUTO_H

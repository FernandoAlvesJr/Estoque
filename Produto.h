#include "Ciclo.h"

class Produto : public Ciclo{
	public:
		Produto(const string & = "periodo" , int = 1, int = 1, int =2000, float = 0, float = 0, int = 0, long = 0, const string & = "produto");
		Produto(const Produto &p);
		virtual ~Produto();
		virtual void setPeriodo(const string &) = 0;
        virtual string getPeriodo() = 0;
        virtual void trocaPeriodo(const string &) = 0;
		string getNome();
		void setNome(const string &);
		long getCodigo();
		void setCodigo(long);
		void alteraCodigo(long);
		void alteraProduto(long, const string &, const string &);

	protected:
		long codigo;
		string nome;

};

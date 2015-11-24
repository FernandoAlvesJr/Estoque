#include "Ciclo.h"

class Produto : public Ciclo{
	public:
		Produto(const string & = "periodo" , int = 1, int = 1, int =2000, float = 0, float = 0, int = 0, long = 0, const string & = "produto");
		Produto(const Produto &p);
		virtual ~Produto();
		virtual long getCodigo();
		virtual void setCodigo(int cod);
		virtual string getNome();
		virtual void setNome(const string &nome);
		virtual string getPeriodo();
		virtual void setPeriodo(const string &p);
	
	private:
		long codigo;
		string nome;
		
};

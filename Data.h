#include <iostream>

class Data{
	public:
		Data(int = 0, int = 0, int = 0);
		Data(const Data &);
		void MOSTRADATA();
	
	private:
		int dia;
		int mes;
		int ano;
};

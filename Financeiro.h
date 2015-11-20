#include <iostream>

class Financeiro
{
    public:
        Financeiro(float = 0, float = 0);
        Financeiro(const Financeiro &);
        ~Financeiro();
        float getPrecoCompra();
        void setPrecoCompra(float);
        float getPrecoVenda();
        void setPrecoVenda(float);
        void somaReceita(float);
        void somaLucro(float, float);
        void MOSTRARECEITA();
        void MOSTRALUCRO();


    private:
        float precoCompra;
        float precoVenda;
        static float totalReceita;
        static float totalLucro;
};

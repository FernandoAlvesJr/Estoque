#include "Maquiagem.h"
#include "Perfumaria.h"
#include "AcessoriosVenda.h"
#include "Acessorio.h"
#include <stdlib.h>
#include <vector>

using std::vector;
using std::cout;
using std::cin;
using std::endl;

int menuPrinc();
void menuCad();
void cadastroMaquiagem();
void cadastroPerfumaria();
void cadastroAcessorioVenda();
void cadastroAcessorio();

vector <Maquiagem *> maq;
vector <Perfumaria *> perf;
vector <AcessoriosVenda *> acesVenda;
vector <Acessorio *> acess;

int main()
{
    cout << "Programa gerenciador de Estoque" << endl;

    int escolha;

    do{
        escolha = menuPrinc();
        switch (escolha)
        {
        case 0:
            return 0;
            break;
        case 1:
            menuCad();
            break;
        default:
            cout << "Codigo invalido" << endl;
        }

    }while(escolha != 0);

    return 0;
}

int menuPrinc()
{
    int sel;
    cout << "Selecione a operacao desejada:\n" << endl;
    cout << "1 - Cadastro de Produto" << endl;
    cout << "2 - Saida de Produto" << endl;
    cout << "3 - Busca de Produto" << endl;
    cout << "4 - Inventario" << endl;
    cout << "0 - Sair\n" << endl;

    cin >> sel;
    return sel;

}

void menuCad()
{
    int sel;

    do{
    cout << "\n\nSelecione o tipo de produto a cadastrar:" << endl;
    cout << "1 - Maquiagem" << endl;
    cout << "2 - Perfumaria" << endl;
    cout << "3 - Acessorios(venda)" << endl;
    cout << "4 - Acessorios(pessoal)" << endl;
    cout << "0 - Voltar para o menu Principal\n" << endl;
    cin >> sel;

    switch (sel)
    {
        case 1:
            cadastroMaquiagem();
            break;
        case 2:
            cadastroPerfumaria();
            break;
        case 3:
            cadastroAcessorioVenda();
            break;
        case 4:
            cadastroAcessorio();
            break;
        case 0:
            cout << "Menu Principal" << endl;
            break;
        default:
            cout << "Codigo invalido\n" << endl;
    }

    }while(sel != 0);

    system("cls");

}

void cadastroMaquiagem()
{
    string orig, nome, tipo, cor;
    long cod;
    float pCompra, pVenda;
    int pts, dia, mes, ano;

    cout << "Origem: ";
    cin >> orig;
    cout << "Codigo: ";
    cin >> cod;
    cout << "Nome do Produto: ";
    cin >> nome;
    cout << "Pontos: ";
    cin >> pts;
    cout << "Preco de Compra: ";
    cin >> pCompra;
    cout << "Preco de Venda: ";
    cin >> pVenda;
    cout << "Data:\n";
    cout << "Dia: ";
    cin >> dia;
    cout << "Mes: ";
    cin >> mes;
    cout << "Ano: ";
    cin >> ano;
    cout << "Tipo de Maquiagem: ";
    cin >> tipo;
    cout << "Cor: ";
    cin >> cor;

    maq.push_back(0);
    maq[maq.size()-1] = new Maquiagem("venda",orig, cod, nome, pts, pCompra, pVenda, dia, mes, ano, tipo, cor);

    cout << "Maquiagem Cadastrada\n\n";
    system("pause");
}

void cadastroPerfumaria()
{
    string orig, nome, genero;
    long cod;
    float pCompra, pVenda;
    int pts, dia, mes, ano, vol;

    cout << "Origem: ";
    cin >> orig;
    cout << "Codigo: ";
    cin >> cod;
    cout << "Nome do Produto: ";
    cin >> nome;
    cout << "Pontos: ";
    cin >> pts;
    cout << "Preco de Compra: ";
    cin >> pCompra;
    cout << "Preco de Venda: ";
    cin >> pVenda;
    cout << "Data:\n";
    cout << "Dia: ";
    cin >> dia;
    cout << "Mes: ";
    cin >> mes;
    cout << "Ano: ";
    cin >> ano;
    cout << "Genero: ";
    cin >> genero;
    cout << "Volume: ";
    cin >> vol;

    perf.push_back(0);
    perf[perf.size()-1] = new Perfumaria("venda",orig, cod, nome, pts, pCompra, pVenda, dia, mes, ano, genero, vol);

    cout << "Perfume Cadastrado\n\n";
    system("pause");
}

void cadastroAcessorioVenda()
{
    string orig, nome, linha, tamanho;
    long cod;
    float pCompra, pVenda;
    int pts, dia, mes, ano;

    cout << "Origem: ";
    cin >> orig;
    cout << "Codigo: ";
    cin >> cod;
    cout << "Nome do Produto: ";
    cin >> nome;
    cout << "Pontos: ";
    cin >> pts;
    cout << "Preco de Compra: ";
    cin >> pCompra;
    cout << "Preco de Venda: ";
    cin >> pVenda;
    cout << "Data:\n";
    cout << "Dia: ";
    cin >> dia;
    cout << "Mes: ";
    cin >> mes;
    cout << "Ano: ";
    cin >> ano;
    cout << "Linha: ";
    cin >> linha;
    cout << "Tamanho: ";
    cin >> tamanho;

    acesVenda.push_back(0);
    acesVenda[acesVenda.size()-1] = new AcessoriosVenda("venda",orig, cod, nome, pts, pCompra, pVenda, dia, mes, ano, linha, tamanho);

    cout << "Acessorio a venda Cadastrado\n\n";
    system("pause");
}

void cadastroAcessorio()
{

}

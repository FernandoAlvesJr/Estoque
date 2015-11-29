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
void buscaProduto();
void saidaProduto();

vector<Produto *>produtos;


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
        case 2:
            saidaProduto();
            break;
        case 3:
            buscaProduto();
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
    cout << "\n\nSelecione a operacao desejada:\n" << endl;
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
            break;
        default:
            cout << "Codigo invalido\n" << endl;
    }

    }while((sel < 0)||(sel > 4));

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

    produtos.push_back(0);
    produtos[produtos.size()-1] = new Maquiagem("venda", orig, cod, nome, pts, pCompra, pVenda, dia, mes, ano, tipo, cor);

    cout << "Maquiagem Cadastrada\n\n";
    system("pause");
    system("cls");
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

    produtos.push_back(0);
    produtos[produtos.size()-1] = new Perfumaria("venda",orig, cod, nome, pts, pCompra, pVenda, dia, mes, ano, genero, vol);

    cout << "Perfume Cadastrado\n\n";
    system("pause");
    system("cls");
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

    produtos.push_back(0);
    produtos[produtos.size()-1] = new AcessoriosVenda("venda",orig, cod, nome, pts, pCompra, pVenda, dia, mes, ano, linha, tamanho);

    cout << "Acessorio a venda Cadastrado\n\n";
    system("pause");
    system("cls");
}

void cadastroAcessorio()
{
    string orig, nome, tipo, tamanho;
    long cod;
    float pCompra;
    int dia, mes, ano;

    cout << "Origem: ";
    cin >> orig;
    cout << "Codigo: ";
    cin >> cod;
    cout << "Nome do Produto: ";
    cin >> nome;
    cout << "Preco de Compra: ";
    cin >> pCompra;
    cout << "Data:\n";
    cout << "Dia: ";
    cin >> dia;
    cout << "Mes: ";
    cin >> mes;
    cout << "Ano: ";
    cin >> ano;
    cout << "Tipo: ";
    cin >> tipo;
    cout << "Tamanho: ";
    cin >> tamanho;

    produtos.push_back(0);
    produtos[produtos.size()-1] = new Acessorio("venda",orig, cod, nome, dia, mes, ano, pCompra, 0, 0,  tipo, tamanho);

    cout << "Acessorio Cadastrado\n\n";
    system("pause");
    system("cls");
}

void buscaProduto()
{
    long cod;
    int a = 0;
    cout << "Informe o Codigo do Produto para pesquisar: ";
    cin >> cod;

    for(int i=0; i<(int)produtos.size(); i++)
    {
        if (produtos[i]->getCodigo() == cod)
        {
            a++;
        }
    }

    if (a == 0)
        cout << "Produto nao foi encontrado no estoque" << endl;
    else
    {
        cout << "Existem "
             << a
             << " unidades no estoque"
             << endl;
    }
    system("pause");
    system("cls");
}

void saidaProduto()
{
    long cod;
    cout << "Informe o Codigo do Produto para pesquisar: ";
    cin >> cod;

    for (int i=0; i<(int)produtos.size(); i++)
    {
        if (produtos[i]->getCodigo() == cod)
            produtos[i]->somaReceita();
            break;
    }

    //circulantes[1]->financ.totalReceita += financ.getPrecoVenda();
}

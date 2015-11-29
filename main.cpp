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
void inventario();
void pontuacao();
void financeiro();

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
        case 4:
            inventario();
            break;
        default:
            cout << "Codigo invalido" << endl;
            break;
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
    system("cls");
    string orig, nome, tipo, cor;
    long cod;
    float pCompra, pVenda;
    int pts, dia, mes, ano;
    cout << "=====Cadastro de Maquiagem======" << endl;

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

    Circulante *ptr = dynamic_cast<Circulante *> (produtos[produtos.size()-1]);
    ptr->incrementaCirculante();



    cout << "Maquiagem Cadastrada\n\n";
    system("pause");
    system("cls");
}

void cadastroPerfumaria()
{
    system("cls");
    string orig, nome, genero;
    long cod;
    float pCompra, pVenda;
    int pts, dia, mes, ano, vol;
    cout << "=====Cadastro de Perfume======" << endl;

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

    Circulante *ptr = dynamic_cast<Circulante *> (produtos[produtos.size()-1]);
    ptr->incrementaCirculante();

    cout << "Perfume Cadastrado\n\n";
    system("pause");
    system("cls");
}

void cadastroAcessorioVenda()
{
    system("cls");
    string orig, nome, linha, tamanho;
    long cod;
    float pCompra, pVenda;
    int pts, dia, mes, ano;
    cout << "=====Cadastro de Acessorios para Venda======" << endl;

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

    Circulante *ptr = dynamic_cast<Circulante *> (produtos[produtos.size()-1]);
    ptr->incrementaCirculante();

    cout << "Acessorio a venda Cadastrado\n\n";
    system("pause");
    system("cls");
}

void cadastroAcessorio()
{
    system("cls");
    string orig, nome, tipo, tamanho;
    long cod;
    float pCompra;
    int dia, mes, ano;
    cout << "=====Cadastro de Acessorio======" << endl;

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

    Imobilizado *ptr = dynamic_cast<Imobilizado *> (produtos[produtos.size()-1]);
    ptr->incrementaImobilizado();

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
    system("cls");
    long cod;
    int sel;
    cout << "Informe o Codigo do Produto para pesquisar: ";
    cin >> cod;


        for (int i=0; i<(int)produtos.size(); i++)
        {
            if (produtos[i]->getCodigo() == cod)
            {
                produtos[i]->mostrarInfo();

                Circulante *ptr = dynamic_cast<Circulante *> (produtos[i]);
                    if (ptr != 0)
                    {
                        do{
                        cout << "Tipo de saida (1 - venda ; 2 - troca ; 3 - extravio ; 0 - Cancelar): ";
                        cin >> sel;
                        switch(sel)
                        {
                        case 1:
                            ptr->somaReceita();
                            ptr->somaPontos();
                            produtos.erase(produtos.begin()+i);
                            ptr->decrementaCirculante();
                            break;
                        case 2:
                            produtos.erase(produtos.begin()+i);
                            ptr->decrementaCirculante();
                            break;
                        case 3:
                            produtos.erase(produtos.begin()+i);
                            ptr->decrementaCirculante();
                            break;
                        case 0:
                            break;
                        default:
                            cout << "Codigo Invalido\n" << endl;
                            break;

                        }
                        }while((sel < 0)||(sel >3));
                        break;
                    }
                    else
                    {

                        Imobilizado *ptr2 = dynamic_cast<Imobilizado *>(produtos[i]);

                        do{
                        cout << "Confirma saida? (1 - Sim ; 2 - Cancelar): ";
                        cin >> sel;
                        switch(sel)
                        {
                        case 1:
                            produtos.erase(produtos.begin()+i);
                            ptr2->decrementaImobilizado();
                            break;
                        case 2:
                            break;
                        default:
                            cout << "Codigo Invalido\n" << endl;
                            break;

                        }
                    }while((sel < 0)||(sel > 2));
                    break;

                    }
            }

        }
        system("pause");
        system("cls");
}

void inventario()
{
    system("cls");
    int sel;
    do
    {
        cout << "Escolha uma opcao: "<< endl;
        cout << "1 - Produtos" <<endl;
        cout << "2 - Pontuacao" <<endl;
        cout << "3 - Financeiro" <<endl;
        cout << "0 - Menu Principal" <<endl;
        cout << "Opcao: ";
        cin >> sel;
            switch(sel)
            {
            case 1:
                for(int i=0; i<(int)produtos.size(); i++)
                {
                    produtos[i]->mostrarInfo();
                }
                break;
            case 2:
                pontuacao();
                break;
            case 3:
                financeiro();
                break;
            case 0:
                break;
            default:
                cout << "Codigo Invalido\n" << endl;
            }

    }while((sel < 0)||(sel > 3));
    system("pause");
    system("cls");
}

void pontuacao()
{
    system("cls");
    int select;
    do
    {
        cout << "=====PONTUACAO=====" << endl;
        cout << "Escolha uma opcao:" << endl;
        cout << "1 - Situacao no Periodo" << endl;
        cout << "2 - Zerar Pontuacao" << endl;
        cin >> select;
        switch(select)
        {
        case 1:
            Produto::situacaoPontos();
            break;
        case 2:
            cout << "Para zerar a pontuacao, digite 1 (outro numero para cancelar): ";
            cin >> select;
            if (select == 1)
                produtos[1]->zeraPontos();
            else
                cout << "Operacao cancelada\n" << endl;
            break;
        case 0:
            break;
        default:
            cout << "Codigo Invalido\n" << endl;

        }

    }while((select < 0)||(select > 2));
    system("pause");
    system("cls");
}

void financeiro()
{
    system("cls");
    int select;
    do
    {
        cout << "=====FINANCEIRO=====" << endl;
        cout << "Escolha uma opcao:" << endl;
        cout << "1 - Receita no Periodo" << endl;
        cout << "2 - Zerar Receita" << endl;
        cin >> select;
        switch(select)
        {
        case 1:
            produtos[1]->MOSTRARECEITA();
            break;
        case 2:
            cout << "Para zerar a receita, digite 1 (outro numero para cancelar): ";
            cin >> select;
            if (select == 1)
                produtos[1]->zeraReceita();
            else
                cout << "Operacao cancelada\n" << endl;
            break;
        case 0:
            break;
        default:
            cout << "Codigo Invalido\n" << endl;

        }

    }while((select < 0)||(select > 2));
    system("pause");
    system("cls");
}

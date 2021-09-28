#include "SistemaAutomoveis.h"

SistemaAutomoveis::SistemaAutomoveis()
{
    //ctor
}

SistemaAutomoveis::~SistemaAutomoveis()
{
    //dtor
}

void SistemaAutomoveis::exibirMenuPricipal()
{
    int opcao = -1;
    while(opcao != 0)
    {
        cout << "*** Menu de opcoes ***"<<endl;
        cout << "1 - Cadastrar" << endl;
        cout << "2 - Listar" << endl;
        cout << "3 - excluir" << endl;
        cout << "0 - sair " << endl;

        cin >> opcao;

        switch(opcao)
        {
            case 1: cadastrarAutomovel(); break;
            case 2: listarAutomoveis(); break;
            case 3: excluirAutomovel(); break;
        }
        system("pause");
        system("cls");

    }
}
void SistemaAutomoveis::cadastrarAutomovel()
{
    cout << "**** Cadastro de automovel ****" <<endl;
    Carro* novoCarro = new Carro();
    novoCarro->cadastrarDados();
    automoveis.push_back(novoCarro);
}
void SistemaAutomoveis::listarAutomoveis()
{
    cout <<"*** Listagem de automovel ***" <<endl;
    for(int i=0;i<automoveis.size();i++)
    {
            cout << "-- Carro da posicao " << i << " --" << endl;
            automoveis[i]->imprimirDados();

    }
}
void SistemaAutomoveis::excluirAutomovel(){
    cout << "*** exclusao de automovel ***" <<endl;
    listarAutomoveis();
    cout<<"informe a posicao a excluir: " <<endl;
    int posicao;
    cin >> posicao;
    automoveis.erase(automoveis.begin() + posicao);
}

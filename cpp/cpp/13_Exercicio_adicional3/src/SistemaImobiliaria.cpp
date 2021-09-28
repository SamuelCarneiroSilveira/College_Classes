#include "SistemaImobiliaria.h"

SistemaImobiliaria::SistemaImobiliaria()
{
    //ctor
}

SistemaImobiliaria::~SistemaImobiliaria()
{
    //dtor
}

void SistemaImobiliaria::menuPrincipal()
{
    int opcao = -1;
    while(opcao != 0){
        cout << "*** Menu Principal ***" << endl;
        cout << "1-Menu Casas" << endl;
        cout << "2-Menu Apartamentos" << endl;
        cout << "0-Sair" << endl;

        cin >> opcao;

        switch(opcao){
        case 1:  menuCasas(); break;
        case 2:  menuApartamentos(); break;
        }
        system("pause");
        system("cls");
    }
    cout << "Programa encerrado!" << endl;
}
void SistemaImobiliaria::menuCasas()
{
    int opcao = -1;
    while(opcao != 0){
        cout << "*** Menu Casas ***" << endl;
        cout << "1-Incluir Casa" << endl;
        cout << "2-Listar Casas" << endl;
        cout << "3-Excluir Casa" << endl;
        cout << "0-Sair" << endl;

        cin >> opcao;

        switch(opcao){
        case 1:  incluirCasa(); break;
        case 2:  listarCasas(); break;
        case 3:  excluirCasa(); break;
        }
        system("pause");
        system("cls");
    }
}
void SistemaImobiliaria::incluirCasa()
{
    Casa* novaCasa = new Casa();
    novaCasa->cadastrarDados();
    casas.push_back(novaCasa);
}
void SistemaImobiliaria::listarCasas()
{
    for(int i = 0; i < casas.size(); i++)
    {
        cout << "posicao: " << i << endl;
        casas[i]->imprimirDados();
    }
}
void SistemaImobiliaria::excluirCasa()
{
    cout << "Relacao de casas: " << endl;
    listarCasas();
    int posicao;
    cout << "informe a posicao a excluir: " << endl;
    cin >> posicao;
    casas.erase(casas.begin() + posicao);
}
void SistemaImobiliaria::menuApartamentos()
{
        int opcao = -1;
    while(opcao != 0){
        cout << "*** Menu Apartamentos ***" << endl;
        cout << "1-Incluir apartamento" << endl;
        cout << "2-Listar apartamentos" << endl;
        cout << "3-Excluir apartamentos" << endl;
        cout << "0-Sair" << endl;

        cin >> opcao;

        switch(opcao){
        case 1: incluirApartamento(); break;
        case 2: listarApartamentos(); break;
        case 3: excluirApartamento(); break;
        }
        system("pause");
        system("cls");
    }
}
void SistemaImobiliaria::incluirApartamento()
{
    Apartamento* novoApartamento = new Apartamento();
    novoApartamento->cadastrarDados();
    apartamentos.push_back(novoApartamento);
}
void SistemaImobiliaria::listarApartamentos()
{
    for(int i = 0; i < apartamentos.size(); i++)
    {
        cout << "Posicao " << i << endl;
        apartamentos[i]->imprimirDados();
    }
}
void SistemaImobiliaria::excluirApartamento()
{
    cout << "Relacao dos apartamentos " << endl;
    listarCasas();
    cout << "Informe a posicao" << endl;
    int posicao;
    cin >> posicao;
    apartamentos.erase(apartamentos.begin() + posicao);

}

#include "SistemaRevendedora.h"

SistemaRevendedora::SistemaRevendedora()
{
    //ctor
}

SistemaRevendedora::~SistemaRevendedora()
{
    //dtor
}

void SistemaRevendedora::menuPrincipal()
{
    int opcao = -1;
    while(opcao != 0)
    {
        cout << " *** Voce esta no menu principal *** " << endl;
        cout << "1 - Menu automoveis" << endl;
        cout << "2 - Menu caminhoes" << endl;
        cout << "3 - Menu de motocicletas" << endl;
        cout << "0 - exit" << endl;

        cin >> opcao;

        switch(opcao)
        {
        case 1:
            menuAutomoveis();
            break;
        case 2:
            menuCaminhoes();
            break;
        case 3:
            menuMotocicletas();
            break;
        }
        system("pause");
        system("cls");
    }
    cout << "Sistema Encerrado" << endl;
}
void SistemaRevendedora::menuAutomoveis()
{
    int opcao = -1;
    while(opcao != 0)
    {
        cout << " *** Voce esta no menu de automoveis *** " << endl;
        cout << "1 - cadastrar" << endl;
        cout << "2 - listar" << endl;
        cout << "3 - excluir" << endl;
        cout << "0 - exit" << endl;

        cin >> opcao;

        switch(opcao)
        {
        case 1: cadastrarAutomovel();
            break;
        case 2: listarAutomoveis();
            break;
        case 3: excluirAutomoveis();
            break;
        }
        system("pause");
        system("cls");
    }
    cout << "Sistema Encerrado" << endl;
}
void SistemaRevendedora::cadastrarAutomovel()
{
        Automovel* novoAutomovel = new Automovel();
        novoAutomovel->cadastrarDados();
        automoveis.push_back(novoAutomovel);
}
void SistemaRevendedora::listarAutomoveis()
{
    for(int i = 0; i < automoveis.size(); i++)
    {
        cout << "Posicao: " << i << endl;
        automoveis[i]->imprimirDados();
    }
}
void SistemaRevendedora::excluirAutomoveis()
{
    cout << "relação de automoveis: " << endl;
    listarAutomoveis();
    int posicao;
    cout << "informe a posicao a excluir: " << endl;
    cin >> posicao;
    automoveis.erase(automoveis.begin() + posicao);

}
void SistemaRevendedora::menuCaminhoes()
{
    int opcao = -1;
    while(opcao != 0)
    {
        cout << " *** Voce esta no menu de caminhoes *** " << endl;
        cout << "1 - cadastrar" << endl;
        cout << "2 - listar" << endl;
        cout << "3 - excluir" << endl;
        cout << "0 - exit" << endl;

        cin >> opcao;

        switch(opcao)
        {
        case 1: cadastrarCaminhoes();
            break;
        case 2: listarCaminhoes();
            break;
        case 3: excluirCaminhoes();
            break;
        }
        system("pause");
        system("cls");
    }
    cout << "Sistema Encerrado" << endl;
}
void SistemaRevendedora::cadastrarCaminhoes()
{
        Caminhao* novoCaminhao = new Caminhao();
        novoCaminhao->cadastrarDados();
        caminhoes.push_back(novoCaminhao);
}
void SistemaRevendedora::listarCaminhoes()
{
    for(int i = 0; i < caminhoes.size(); i++)
    {
        cout << "Posição: " << i << endl;
        caminhoes[i]->imprimirDados();
    }
}
void SistemaRevendedora::excluirCaminhoes()
{
    cout << "relação de caminhoes: " << endl;
    listarCaminhoes();
    int posicao;
    cout << "informe a posicao a excluir: " << endl;
    cin >> posicao;
    caminhoes.erase(caminhoes.begin() + posicao);
}

void SistemaRevendedora::menuMotocicletas()
{
    int opcao = -1;
    while(opcao != 0)
    {
        cout << " *** Voce esta no menu de motocicletas *** " << endl;
        cout << "1 - cadastrar" << endl;
        cout << "2 - listar" << endl;
        cout << "3 - excluir" << endl;
        cout << "0 - exit" << endl;

        cin >> opcao;

        switch(opcao)
        {
        case 1: cadastrarMotocicleta();
            break;
        case 2: listarMotoclicletas();
            break;
        case 3: excluirMotocicleta();
            break;
        }
        system("pause");
        system("cls");
    }
    cout << "Sistema Encerrado" << endl;
}

void SistemaRevendedora::cadastrarMotocicleta()
{
        Motocicleta* novoMotocicleta = new Motocicleta();
        novoMotocicleta->cadastrarDados();
        motocicletas.push_back(novoMotocicleta);
}
void SistemaRevendedora::listarMotoclicletas()
{
    for(int i = 0; i < motocicletas.size(); i++)
    {
        cout << "Posição: " << i << endl;
        motocicletas[i]->imprimirDados();
    }
}
void SistemaRevendedora::excluirMotocicleta()
{
    cout << "relação de motocicletas: " << endl;
    listarMotoclicletas();
    int posicao;
    cout << "informe a posicao a excluir: " << endl;
    cin >> posicao;
    motocicletas.erase(motocicletas.begin() + posicao);
}

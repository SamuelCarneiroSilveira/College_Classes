#include "SistemaVeiculos.h"

SistemaVeiculos::SistemaVeiculos()
{
    //ctor
}

SistemaVeiculos::~SistemaVeiculos()
{
    //dtor
}
void SistemaVeiculos::menuPrincipal()
{
    int opcao = -1;
    while(opcao != 0){
        cout << "*** Menu ***" << endl;
        cout << "1-Menu de veiculos" << endl;
        cout << "2-Menu de proprietarios" << endl;
        cout << "0-sair"<<endl;

        cin >> opcao;

        switch(opcao){
            case 1: menuVeiculos(); break;
            case 2: menuProprietarios(); break;
        }
        system("pause");
        system("cls");
    }
}
void SistemaVeiculos::menuVeiculos()
{
    int opcao = -1;
    while(opcao != 0){
        cout << "*** Menu Veiculos ***" << endl;
        cout << "1-cadastrar veiculo" << endl;
        cout << "2-listar veiculos" << endl;
        cout << "3-excluir veiculo" << endl;
        cout << "0-sair"<<endl;

        cin >> opcao;

        switch(opcao){
            case 1: cadastrarVeiculo(); break;
            case 2: listarVeiculos(); break;
            case 3: excluirVeiculo(); break;
        }
        system("pause");
        system("cls");
    }
}
void SistemaVeiculos::cadastrarVeiculo()
{
    indiceIncrementalVeiculos ++;
    Veiculo* novoVeiculo = new Veiculo();
    novoVeiculo->cadastrarDadosVeiculo();

    listarProprietarios();
    cout << "informe oa posicao da nova conta: " << endl;
    int pos;
    cin >> pos;
    novoVeiculo->setDono(proprietarios[pos]);
    veiculos.push_back(novoVeiculo);
    cout << "Veiculo " << indiceIncrementalVeiculos << " Cadastrado com sucesso!" << endl;
}
void SistemaVeiculos::listarVeiculos()
{
    cout << "Listagem de veiculos" << endl;
    for(int i = 0; i < veiculos.size(); i++)
    {
        cout << "Posicao do veiculo: " << i << endl;
        veiculos[i]->imprimirDadosVeiculo();
    }
}
void SistemaVeiculos::excluirVeiculo()
{
    listarVeiculos();
    int posicao = consultaPosicaoVeiculo();
    if(posicao == -1)
    {
        cout << "Veiculo nao encontrado" << endl;
    } else
    {
        veiculos.erase(veiculos.begin() + posicao);
    }
}
void SistemaVeiculos::menuProprietarios()
{
    int opcao = -1;
    while(opcao != 0){
        cout << "*** Menu Proprietarios ***" << endl;
        cout << "1-cadastrar proprietario" << endl;
        cout << "2-listar proprietarios" << endl;
        cout << "3-excluir proprietario" << endl;
        cout << "0-sair"<<endl;

        cin >> opcao;
        switch(opcao){
            case 1: cadastrarProprietario(); break;
            case 2: listarProprietarios(); break;
            case 3: excluirProprietario(); break;
        }
        system("pause");
        system("cls");
    }
}
void SistemaVeiculos::cadastrarProprietario()
{
    Proprietario* novoProprietario = new Proprietario();
    novoProprietario->cadastrarDadosProprietario();
    proprietarios.push_back(novoProprietario);
}
void SistemaVeiculos::listarProprietarios()
{
    for(int i = 0; i < proprietarios.size(); i++)
    {
        cout << "Posicao: " << i << endl;
        proprietarios[i]->imprimirDadosProprietario();
    }
}
void SistemaVeiculos::excluirProprietario()
{
    listarProprietarios();
    cout << "informe a posicao a excluir " << endl;
    int pos;
    cin >> pos;
    proprietarios.erase(proprietarios.begin() + pos);
}
int SistemaVeiculos::consultaPosicaoVeiculo()
{
    cout << "informe a placa do carro desejado: " << endl;
    string placa;
    cin >> placa;

    int posicao = -1;
    int i = 0;
    while((posicao == -1)&&(i < veiculos.size()))
    {
        if(veiculos[i]->getPlaca() == placa)
        {
            posicao = i;
        }
        i++;
    }
    return posicao;
}

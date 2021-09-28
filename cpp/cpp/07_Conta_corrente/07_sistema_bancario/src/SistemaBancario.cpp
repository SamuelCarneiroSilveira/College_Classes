#include "SistemaBancario.h"

SistemaBancario::SistemaBancario()
{
    //ctor
}

SistemaBancario::~SistemaBancario()
{
    //dtor
}

void SistemaBancario::menuPrincipal()
{
    int opcao = -1;
    while(opcao !=0)
    {
        cout<<"*** Menu principal ***" << endl;
        cout<<"1 - gerenciamento de contas "<<endl;
        cout<<"2 - operacoes sobre contas"<<endl;
        cout<<"0 - sair"<<endl;
        cin >> opcao;
        switch(opcao){
            case 1: menuGerenciamentoContas(); break;
            case 2: menuOperacoesSobreContas(); break;
        }
        system("pause");
        system("cls");
    }
    cout<<"Programa encerrado! " << endl;
}
void SistemaBancario::menuGerenciamentoContas()
{
    int opcao = -1;
    while(opcao !=0)
    {
        cout<<"*** Submenu de Gerenciamento de contas ***" << endl;
        cout<<"1 - incluir conta "<<endl;
        cout<<"2 - excluir conta "<<endl;
        cout<<"3 - listar contas "<<endl;
        cout<<"0 - Retornar ao menu principal "<<endl;
        cin >> opcao;
        switch(opcao){
            case 1: incluirConta(); break;
            case 2: excluirConta(); break;
            case 3: listarContas(); break;
        }
        system("pause");
        system("cls");
    }
}
void SistemaBancario::incluirConta()
{
    indiceIncrementalContas++;
    ContaCorrente* novaConta = new ContaCorrente();
    novaConta->setNumeroConta(indiceIncrementalContas);
    contas.push_back(novaConta);
    cout<<"Conta "<< indiceIncrementalContas <<" criada com sucesso!!"<<endl;
}
void SistemaBancario::excluirConta()
{
    listarContas();
    cout << "Informe o numero da conta que voce deseja excluir :" << endl;
    int posicao;
    cin >> posicao;

    contas.erase(contas.begin() + posicao);
}
void SistemaBancario::listarContas()
{
    cout << "----- Listagem de contas -----" <<endl;
    for(int i = 0; i < contas.size(); i++)
    {
        cout << "Posicao da conta: "<< i << endl;
        cout << "Numero da conta: "<<contas[i]->getNumeroConta()<<endl;
    }
}
void SistemaBancario::menuOperacoesSobreContas()
{
    int opcao = -1;
    while(opcao !=0)
    {
        cout<<"*** Submenu de operacoes sobre contas ***" << endl;
        cout<<"1 - Realizar deposito"<<endl;
        cout<<"2 - Realizar saque"<<endl;
        cout<<"3 - Exibir saldo"<<endl;
        cout<<"0 - Retornar ao menu principal "<<endl;
        cin >> opcao;
        switch(opcao){
            case 1: realizarDepositoConta(); break;
            case 2: realizarSaqueConta(); break;
            case 3: exibirSaldoConta(); break;
        }
        system("pause");
        system("cls");
    }
}
void SistemaBancario::realizarDepositoConta()
{
    listarContas();
    cout<<"informe a conta que recebera o depósito"<<endl;
    int posicao;
    cin>>posicao;
    float valor;
    cout<<"informe o valor a depositar:" << endl;
    cin>>valor;

    contas[posicao]->realizarDeposito(valor);

}
void SistemaBancario::realizarSaqueConta()
{
    listarContas();
    cout<<"informe a conta que recebera o saque"<<endl;
    int posicao;
    cin>>posicao;
    float valor;
    cout<<"informe o valor a sacar: " << endl;
    cin>>valor;

    contas[posicao]->realizarSaque(valor);
}
void SistemaBancario::exibirSaldoConta()
{
    listarContas();
    cout<<"informe a posicao da conta a exibir o saldo"<<endl;
    int posicao;
    cin>>posicao;

    contas[posicao]->consultarSaldo();
}
int SistemaBancario::consultaPosicaoNaContaInformada()
{
    cout << "Informe o numero da processo" << endl;
    int numero;
    cin >> numero;

    int posicao = -1;
    int i = 0;

    while((posicao == -1) && (i < contas.size()))
    {
        if(contas[i]->getNumeroConta() == numero)
        {
            posicao = i;
        }
        i++;
    }
    return posicao;
}
void SistemaBancario::menuClientes()
{
    int opcao = -1;
    while(opcao !=0)
    {
        cout<<"*** Submenu de clientes ***" << endl;
        cout<<"1 - incluir"<<endl;
        cout<<"2 - listar"<<endl;
        cout<<"3 - excluir"<<endl;
        cout<<"0 - Retornar ao menu principal "<<endl;
        cin >> opcao;
        switch(opcao){
            case 1: incluirCliente(); break;
            case 2: listarClientes(); break;
            case 3: excluirCliente(); break;
        }
        system("pause");
        system("cls");
    }
}
void SistemaBancario::incluirCliente()
{
    Cliente* novoCliente = new Cliente();
    novoCliente
}
void SistemaBancario::listarClientes()
{

}
voidSistemaBancario::excluirCliente()
{

}

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
    while(opcao != 0)
    {
        cout << "*** Menu Principal ***" << endl;
        cout << "1 - Gerenciamento de contas" << endl;
        cout << "2 - Operacoes sobre contas" << endl;
        cout << "3 - Gerenciamento de clientes" << endl;
        cout << "0 - Sair" << endl;
        cin >> opcao;
        switch(opcao)
        {
            case 1: menuGerenciamentoContas(); break;
            case 2: menuOperacoesSobreContas(); break;
            case 3: menuClientes(); break;
        }
        system("pause");
        system("cls");
    }
    cout << "Programa encerrado." << endl;
}

void SistemaBancario::menuGerenciamentoContas()
{
    int opcao = -1;
    while(opcao != 0)
    {
        cout << "*** Submenu de Gerenciamento de contas ***" << endl;
        cout << "1 - Incluir conta" << endl;
        cout << "2 - Excluir conta" << endl;
        cout << "3 - Listar contas" << endl;
        cout << "0 - Retornar ao menu principal" << endl;
        cin >> opcao;
        switch(opcao)
        {
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

    cout << "Relaçao de clientes" << endl;
    listarClientes();
    cout << "Informe o correntista da nova conta" << endl;
    int posicao;
    cin >> posicao;
    novaConta->setCorrentista(clientes[posicao]);

    contas.push_back(novaConta);
    cout << "Conta " << indiceIncrementalContas << " criada com sucesso" << endl;
}
void SistemaBancario::excluirConta()
{
    int posicao = consultaPosicaoContaInformada();
    if (posicao == -1)
    {
        cout << "Conta nao encontrada. " << endl;
    }
    else
    {
        contas.erase(contas.begin() + posicao);
    }
}
void SistemaBancario::listarContas()
{
    cout << "-- Listagem de contas --" << endl;
    for (int i = 0; i < contas.size(); i++)
    {
        cout << "Posicao da conta: " << i << endl;
        cout << "Numero da conta: " << contas[i]->getNumeroConta() << endl;
    }
}

void SistemaBancario::menuOperacoesSobreContas()
{
    int opcao = -1;
    while(opcao != 0)
    {
        cout << "*** Submenu de Operacoes Financeiras de contas ***" << endl;
        cout << "1 - Realizar Deposito" << endl;
        cout << "2 - Realizar Saque" << endl;
        cout << "3 - Consultar saldo" << endl;
        cout << "0 - Retornar ao menu principal" << endl;
        cin >> opcao;
        switch(opcao)
        {
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
    int posicao = consultaPosicaoContaInformada();
    if (posicao == -1)
    {
        cout << "Conta nao encontrada. " << endl;
    }
    else
    {
        float valor;
        cout << "Informe o valor a depositar: " << endl;
        cin >> valor;

        contas[posicao]->realizarDeposito(valor);
    }
}
void SistemaBancario::realizarSaqueConta()
{
    int posicao = consultaPosicaoContaInformada();
    if (posicao == -1)
    {
        cout << "Conta nao encontrada. " << endl;
    }
    else
    {
        float valor;
        cout << "Informe o valor a sacar: " << endl;
        cin >> valor;

        contas[posicao]->realizarSaque(valor);
    }
}
void SistemaBancario::exibirSaldoConta()
{
    int posicao = consultaPosicaoContaInformada();
    if (posicao == -1)
    {
        cout << "Conta nao encontrada. " << endl;
    }
    else
    {
        contas[posicao]->consultarSaldo();
    }
}

int SistemaBancario::consultaPosicaoContaInformada()
{
    cout << "Informe o numero da conta: " << endl;
    int numero;
    cin >> numero;

    int posicao = -1;
    int i = 0;
    while((posicao == -1) && (i < contas.size()))
    {
        if (contas[i]->getNumeroConta() == numero)
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
    while(opcao != 0)
    {
        cout << "*** Submenu de Cliente ***" << endl;
        cout << "1 - incluir" << endl;
        cout << "2 - listar" << endl;
        cout << "3 - excluir" << endl;
        cout << "4 - exibir a relacao de contas do cliente" << endl;
        cout << "0 - Retornar ao menu principal" << endl;
        cin >> opcao;
        switch(opcao)
        {
            case 1: incluirCliente(); break;
            case 2: listarClientes(); break;
            case 3: excluirCliente(); break;
            case 4: consultarContasDoCliente(); break;
        }
        system("pause");
        system("cls");
    }
}
void SistemaBancario::incluirCliente()
{
    Cliente* novoCliente = new Cliente();
    novoCliente->cadastrarDados();
    clientes.push_back(novoCliente);
}
void SistemaBancario::listarClientes()
{
    for(int i = 0; i < clientes.size(); i++)
    {
        cout << "Posicao: " << i << endl;
        clientes[i]->imprimirDados();
    }
}
void SistemaBancario::excluirCliente()
{
    listarClientes();
    cout << "Informe a posicao a excluir: " << endl;
    int posicao;
    cin >> posicao;
    clientes.erase(clientes.begin() + posicao);
}

void SistemaBancario::consultarContasDoCliente()
{
    listarClientes();
    cout << "Informe a posicao a excluir: " << endl;
    int posicao;
    cin >> posicao;

    for(int i = 0; i < contas.size(); i++)
    {
        if(contas[i]->getCorrentista()== clientes[posicao])
        {
            cout << "conta pertencente ao cliente: " << endl;
            cout << contas[i]->getNumeroConta() << endl;
        }
    }
}

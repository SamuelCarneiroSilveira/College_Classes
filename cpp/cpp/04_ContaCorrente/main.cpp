#include <iostream>
#include <ContaCorrente.h>

using namespace std;

int main()
{
    ContaCorrente cc;
    cc.setNumero(1);

    int opcao = -1;
    while (opcao != 0){

        cout << "*** Menu de operacoes ***" << endl;
        cout << "1 - Exibir saldo " << endl;
        cout << "2 - Realizar deposito" << endl;
        cout << "3 - realizar saque" << endl;
        cout << "0 - sair" << endl;
        cin >> opcao;

        float valor;

        switch(opcao){
            case 1:
                cc.exibirSaldo();
                break;
            case 2:
                cout << "informe o valor a depositar: " << endl;
                cin >> valor;
                cc.realizarDeposito(valor);
                break;
            case 3:
                cout << "Informe o valor a sacar: " << endl;
                cin >> valor;
                cc.realizarSaque(valor);
                break;
        }
        system("pause");
        system("cls");

    }
    cout << "Sistema encerrado!" <<endl;
    return 0;
}

#include "SistemaRetangulo.h"

SistemaRetangulo::SistemaRetangulo()
{
    //ctor
}

SistemaRetangulo::~SistemaRetangulo()
{
    //dtor
}
void SistemaRetangulo::menuPrincipal()
{
    int opcao = -1;
    while(opcao != 0){
        cout<<"*** Menu principal ***"<< endl;
        cout<<"1-Incluir"<< endl;
        cout<<"2-Listar"<< endl;
        cout<<"3-Excluir"<< endl;
        cout<<"4-Transladar"<< endl;
        cout<<"0-Sair"<< endl;
        cin >> opcao;
        switch(opcao){
            case 1: incluir(); break;
            case 2: listar(); break;
            case 3: excluir(); break;
            case 4: transladar(); break;
        }
        system("pause");
        system("cls");
    }
    cout << "Ate a proxima!" << endl;
}
void SistemaRetangulo::incluir()
{
    Retangulo* novoRetangulo = new Retangulo();
    novoRetangulo->cadastrarDados();
    retangulos.push_back(novoRetangulo);
}
void SistemaRetangulo::excluir()
{
    listar();
    cout << "informe a posicao do retangulo a ser excluído: " << endl;
    int pos;
    cin >> pos;
    retangulos.erase(retangulos.begin() + pos);
}
void SistemaRetangulo::listar()
{
    for(int i = 0; i < retangulos.size() ; i++)
    {
        cout << "Posicao " << i << endl;
        retangulos[i]->imprimirDados();
    }
}
void SistemaRetangulo::transladar()
{
   listar();
   cout << "informe a posicao do retangulo a transladar: " << endl;
   int posicao;
   cin >> posicao;
   float x, y;
   cout << "informe a distancia em x: " << endl;
   cin >> x;
   cout << "informe a distancia em y: " << endl;
   cin >> y;

   retangulos[posicao]->transladar(x,y);
}

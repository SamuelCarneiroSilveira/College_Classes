#include "SistemaEstoque.h"

SistemaEstoque::SistemaEstoque()
{
    //ctor
}

SistemaEstoque::~SistemaEstoque()
{
    //dtor
}

void SistemaEstoque::menuPrincipal()
{
    int opcao = -1;
    while(opcao != 0){
        cout << "*** menu principal ***" << endl;
        cout << "1-incluir ferramenta" << endl;
        cout << "2-listar ferramentas" << endl;
        cout << "3-excluir ferramenta" << endl;
        cout << "4-alterar estoque de ferramenta" << endl;
        cout << "0-sair"<< endl;
        cout << "------------------------" << endl;
        cout << "informe a opcao desejada" << endl;
        cin >> opcao;

        switch(opcao){
        case 1: incluirFerramenta();break;
        case 2: listarFerramentas();break;
        case 3: excluirFerramenta();break;
        case 4: alterarEstoque();break;
        }
    }
}

void SistemaEstoque::incluirFerramenta()
{
    Ferramenta* novaFerramenta = new Ferramenta();
    novaFerramenta->cadastrarDados();
    ferramentas.push_back(novaFerramenta);
}
void SistemaEstoque::listarFerramentas()
{
    for(int i = 0; i < ferramentas.size(); i++)
    {
        cout << "posicao: " << i << endl;
        ferramentas[i]->imprimirDados();
    }
}
void SistemaEstoque::excluirFerramenta()
{
    cout << "Relacao de ferramentas: " << endl;
    listarFerramentas();
    cout << "informe a posicao da ferramenta desejada: " << endl;
    int posicao;
    cin >> posicao;
    ferramentas.erase(ferramentas.begin() + posicao);
}
void SistemaEstoque::alterarEstoque()
{
    cout << "Relacao de ferramentas"<<endl;
    listarFerramentas();
    cout << "informe a posicao da ferramenta desejada: " << endl;
    int posicao;
    cin >> posicao;

    int opcaoOperacao;
    cout << "informe a operacao desejada(1/entrada ou 2/saida): " << endl;
    cin >> opcaoOperacao;
    if(opcaoOperacao == 1)
    {
        int qtd;
        cout << "informe a quantidade a adicionar ao estoque: " << endl;
        cin >> qtd;
        ferramentas[posicao]->adicionarAoEstoque(qtd);
    }
    else if(opcaoOperacao == 2){
        int qtd;
        cout << "informe a quantidade a remover do estoque: " << endl;
        cin >> qtd;
        ferramentas[posicao]->removerDoEstoque(qtd);
    }
    else{
        cout << "operacao invalida" << endl;
    }
}


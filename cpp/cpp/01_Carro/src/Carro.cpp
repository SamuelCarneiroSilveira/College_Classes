#include "Carro.h"

        void Carro::setModelo(string modelo){
                this->modelo = modelo;
        }
        void Carro::setAnoFabricacao(int anoFabricacao){
                this->anoFabricacao = anoFabricacao;
        }
        void Carro::setCor(string cor){
                this->cor = cor;
        }
        string Carro::getModelo(){
                return modelo;
        }
        int Carro::getAnoFabricacao(){
                return anoFabricacao;
        }
        string Carro::getCor(){
                return cor;
        }

        void Carro::cadastrarDados(){
            cout << "informe o modelo: " <<endl;
            cin >> modelo;
            cout <<"informe o ano: " <<endl;
            cin >> anoFabricacao;
            cout <<"informe a cor: "<<endl;
            cin >> cor;
        }
        void Carro::ImprimirDados(){
            cout << "modelo: " << modelo << endl;
            cout << "ano: " << anoFabricacao << endl;
            cout << "cor: " << cor << endl;
        }

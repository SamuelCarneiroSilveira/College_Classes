#ifndef SISTEMAREVENDEDORA_H
#define SISTEMAREVENDEDORA_H
#include <vector>

#include "Automovel.h"
#include "Caminhao.h"
#include "Motocicleta.h"

using namespace std;

class SistemaRevendedora
{
    public:
        SistemaRevendedora();
        virtual ~SistemaRevendedora();

        void menuPrincipal();


        void menuAutomoveis();
            void cadastrarAutomovel();
            void listarAutomoveis();
            void excluirAutomoveis();

        void menuCaminhoes();
            void cadastrarCaminhoes();
            void listarCaminhoes();
            void excluirCaminhoes();

        void menuMotocicletas();
            void cadastrarMotocicleta();
            void listarMotoclicletas();
            void excluirMotocicleta();

    protected:

   private:
        vector<Automovel*>automoveis;
        vector<Caminhao*>caminhoes;
        vector<Motocicleta*>motocicletas;
};

#endif // SISTEMAREVENDEDORA_H

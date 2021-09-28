#ifndef SISTEMARETANGULO_H
#define SISTEMARETANGULO_H
#include "Retangulo.h"
#include <vector>
#include <string>
#include <iostream>

using namespace std;

class SistemaRetangulo
{
    public:
        SistemaRetangulo();
        virtual ~SistemaRetangulo();

        void menuPrincipal();
        void incluir();
        void excluir();
        void listar();
        void transladar();

    protected:

    private:
        vector<Retangulo*> retangulos;
};

#endif // SISTEMARETANGULO_H

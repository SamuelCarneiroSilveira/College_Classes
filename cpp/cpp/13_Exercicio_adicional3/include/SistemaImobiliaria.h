#ifndef SISTEMAIMOBILIARIA_H
#define SISTEMAIMOBILIARIA_H
#include <vector>
#include "Casa.h"
#include "Apartamento.h"

using namespace std;

class SistemaImobiliaria
{
    public:
        SistemaImobiliaria();
        virtual ~SistemaImobiliaria();

        void menuPrincipal();

        void menuCasas();
        void incluirCasa();
        void listarCasas();
        void excluirCasa();

        void menuApartamentos();
        void incluirApartamento();
        void listarApartamentos();
        void excluirApartamento();

    protected:

    private:
        vector<Casa*> casas;
        vector<Apartamento*> apartamentos;
};

#endif // SISTEMAIMOBILIARIA_H

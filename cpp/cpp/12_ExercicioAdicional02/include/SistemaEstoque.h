#ifndef SISTEMAESTOQUE_H
#define SISTEMAESTOQUE_H
#include "Ferramenta.h"
#include <vector>


class SistemaEstoque
{
    public:
        SistemaEstoque();
        virtual ~SistemaEstoque();

       void menuPrincipal();
        void incluirFerramenta();
        void listarFerramentas();
        void excluirFerramenta();
        void alterarEstoque();
    protected:

    private:
        vector<Ferramenta*> ferramentas;
};

#endif // SISTEMAESTOQUE_H

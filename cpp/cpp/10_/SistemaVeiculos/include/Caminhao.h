#ifndef CAMINHAO_H
#define CAMINHAO_H
#include "Veiculo.h"


class Caminhao: public Veiculo
{
    public:
        Caminhao();
        virtual ~Caminhao();

        void setTipoCarroceria(string tipoCarroceria);
        void setNrEixos(int nrEixos);
        string getTipoCarroceria();
        int getNrEixos();

        void cadastrarDados();
        void imprimirDados();

    protected:

    private:
        string tipoCarroceria;
        int nrEixos;
};

#endif // CAMINHAO_H

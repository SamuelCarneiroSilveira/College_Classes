#ifndef MOTOCICLETA_H
#define MOTOCICLETA_H
#include "Veiculo.h"

class Motocicleta: public Veiculo
{
    public:
        Motocicleta();
        virtual ~Motocicleta();

        void setEstilo(string estilo);
        string getEstilo();

        void cadastrarDados();
        void imprimirDados();

    protected:

    private:
        string estilo;
};

#endif // MOTOCICLETA_H

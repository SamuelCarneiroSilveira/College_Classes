#ifndef PONTO2D_H
#define PONTO2D_H
#include <math.h>


class Ponto2D
{
    public:
        Ponto2D();
        virtual ~Ponto2D();

        void setX(float x);
        void setY(float y);
        float getx();
        float gety();

        float calculaDistanciaAOrigem();

    protected:

    private:
        float x;
        float y;
};

#endif // PONTO2D_H

#ifndef CIRCULO_H
#define CIRCULO_H

#include <math.h>


class Circulo
{
    public:
        void setRaio(float raio);
        float getArea();
        float getPerimetro();

    protected:

    private:
        float raio;
};

#endif // CIRCULO_H

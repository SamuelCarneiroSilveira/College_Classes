#ifndef RETANGULO_H
#define RETANGULO_H

using namespace std;


class Retangulo
{
    public:

        void setAltura(float altura);
        void setBase(float base);

        float getPerimetro();
        float getArea();


    protected:

    private:
        float altura;
        float base;
};

#endif // RETANGULO_H

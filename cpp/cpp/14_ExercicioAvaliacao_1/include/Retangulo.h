#ifndef RETANGULO_H
#define RETANGULO_H


class Retangulo
{
    public:
        Retangulo();
        virtual ~Retangulo();

        void setx(float x);
        void sety(float y);
        void setAltura(float altura);
        void setLargura(float largura);

        float getX();
        float getY();
        float getAltura();
        float getLargura();

        void transladar(float dx, float dy);

    protected:

    private:
        float x, y, altura, largura;
};

#endif // RETANGULO_H

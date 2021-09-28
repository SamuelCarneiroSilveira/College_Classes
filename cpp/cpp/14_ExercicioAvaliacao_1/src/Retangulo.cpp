#include "Retangulo.h"

Retangulo::Retangulo()
{
    //ctor
}

Retangulo::~Retangulo()
{
    //dtor
}

void Retangulo::setx(float x)
{
    this->x = x;
}
void Retangulo::sety(float y)
{
    this->y = y;
}
void Retangulo::setAltura(float altura)
{
    this->altura = altura;
}
void Retangulo::setLargura(float largura)
{
    this->largura = largura;
}
float Retangulo::getX()
{
    return x;
}
float Retangulo::getY()
{
    return y;
}
float Retangulo::getAltura()
{
    return altura;
}
float Retangulo::getLargura()
{
    return largura;
}
void Retangulo::transladar(float dx, float dy)
{
    x += dx;
    y += dy;
}

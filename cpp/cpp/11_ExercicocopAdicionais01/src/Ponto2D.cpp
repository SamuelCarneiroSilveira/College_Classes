#include "Ponto2D.h"

Ponto2D::Ponto2D()
{
    //ctor
}

Ponto2D::~Ponto2D()
{
    //dtor
}
void Ponto2D::setX(float x)
{
    this->x = x;
}
void Ponto2D::setY(float y)
{
    this->y = y;
}
float Ponto2D::getx()
{
    return x;
}
float Ponto2D::gety()
{
    return y;
}

float Ponto2D::calculaDistanciaAOrigem()
{
    float d = sqrt(pow(x,2)+ pow(y,2));
    return d;
}

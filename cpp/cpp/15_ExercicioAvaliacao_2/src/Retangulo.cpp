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

void Retangulo::cadastrarDados()
{
    cout << "informe a largura: " << endl;
    cin >> largura;
    cout << "informe a altura: " << endl;
    cin >> altura;
    cout << "informe o x: " << endl;
    cin >> x;
    cout << "informe o y: " <<endl;
    cin>> y;
}
void Retangulo::imprimirDados()
{
    cout << "Altura : " << altura <<endl;
    cout << "Largura : " << largura <<endl;
    cout << "X : " << x <<endl;
    cout << "Y : " << y <<endl;
}

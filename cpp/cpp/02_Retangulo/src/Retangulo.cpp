#include "Retangulo.h"

void Retangulo::setAltura(float altura){
    this->altura = altura;
}
void Retangulo::setBase(float base){
    this->base = base;
}

float Retangulo::getPerimetro(){
    float perimetro = 2*(base+altura);
    return perimetro;
}
float Retangulo::getArea(){
    float area = base * altura;
    return area;
}

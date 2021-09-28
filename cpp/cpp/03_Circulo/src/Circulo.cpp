#include "Circulo.h"

   void Circulo::setRaio(float raio){
        this->raio = raio;
   }
   float Circulo::getArea(){

        float area = M_PI * pow(raio, 2);
        return area;
   }
   float Circulo::getPerimetro(){

        float perimetro = 2 * M_PI * raio;
        return perimetro;
   }

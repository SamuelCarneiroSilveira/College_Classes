#include <iostream>
#include "Retangulo.h"
using namespace std;

int main()
{
    Retangulo r;
    float x, y, largura, altura;

    //Alimentando o codigo

    cout << "Informe o x: " << endl;
    cin >> x;
    r.setx(x);
    cout << "Informe o y: " << endl;
    cin >> y;
    r.sety(y);
    cout << "Informe a altura: " << endl;
    cin >> altura;
    r.setAltura(altura);
    cout << "Informe a largura: " << endl;
    cin >> largura;
    r.setLargura(largura);

    //Valores para transladar

    float dx, dy;
    cout << "informe o valor de translacao em x: " << endl;
    cin >> dx;
    cout << "informe o valor de translacao em y: " << endl;
    cin >> dy;
    r.transladar(dx, dy);

    system("cls");

    //apresentar as coordenadas finais

    cout << "***  Apos transladar  *** " << endl;
    cout << "Altura:  " << r.getAltura() << endl;
    cout << "Largura: " << r.getLargura() << endl;
    cout << "X: " << r.getX() <<endl;
    cout << "Y: " << r.getY() << endl;
    return 0;
}

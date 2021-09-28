#include <iostream>
#include <Retangulo.h>

using namespace std;

int main()
{
    Retangulo r;

    float aux;

    cout << "informe a altura: " << endl;
    cin >> aux;
    r.setAltura(aux);

    cout << "informe a base: " << endl;
    cin >> aux;
    r.setBase(aux);

    cout << "A area é: " << r.getArea() <<endl;
    cout << "O perimetro é: " << r.getPerimetro() <<endl;
    return 0;
}

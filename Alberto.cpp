#include <iostream>
using namespace std;

class Figura
{
private:
    int b, h;
    float a;

public:
    Figura();
    Figura(int b, int h);
    void setArea(float a);
    float getArea();
};
class Cuadrado : public Figura
{
    Cuadrado(int b);
};
class Rectangulo : public Figura
{
    Rectangulo(int b, int h);: Figura(int b, int h);
};
class Triangulo : public Figura
{
    Triangulo(int b, int h);: Figura(int b, int h);
};

/*
    Implementa los constructores y funciones de la clase Figura.
    El área NO se debe de asignar en el constructor de Figura, ÚNICAMENTE en el constructor individual de cada figura.
*/

/*
    Implementa la clase Cuadrado que hereda de Figura.
    Crear constructor de Cuadrado que herede del constructor de Figura.
    Asignar el área del cuadrado.
*/

/*
    Implementa la clase Rectángulo que hereda de Figura.
    Crear constructor de Rectángulo que herede del constructor de Figura.
    Asignar el área del Rectángulo.
*/

/*
    Implementa la clase Triángulo que hereda de Figura.
    Crear constructor de Triángulo que herede del constructor de Figura.
    Asignar el área del Triángulo.
*/

int main()
{

    Cuadrado s(5);
    cout << s.getArea() << endl; // 25
    Rectangulo r(5, 5);
    cout << r.getArea() << endl; // 25
    Triangulo t(5, 10);
    cout << t.getArea() << endl; // 25
    return 0;
}

Figura::Figura()
{
    this->b = 0;
    this->h = 0;
}
Figura::Figura(int b, int h)
{

    this->b = b;
    this->h = h;
}
void Figura::setArea(float a)
{
    this->a = a;
}
float Figura::getArea()
{
    return a;
}
Cuadrado::Cuadrado(int b) : Figura(b, b)
{
    setArea(b * b);
}
Rectangulo::Rectangulo(int b, int h) : Figura(b, h)
{
    setArea(b * h);
}
Triangulo::Triangulo(int b, int h) : Figura(b, h)
{
    setArea(b * h / 2);
}
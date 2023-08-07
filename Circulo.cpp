#include "Circulo.hpp"

Circulo::Circulo(float raio, bool boo) : Polygon(boo), pi(3.14) {
    this->raio = raio;
}

double Circulo::getArea() {
    return pi * (raio * raio);
}

double Circulo::getPerimetro() {
    return 2 * pi * raio;
}

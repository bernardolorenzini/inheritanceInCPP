#include "Triangulo.hpp"

TrianguloI::TrianguloI(double base, double altura, double largura, bool boo) : Polygon(boo) {
    this->base = base;
    this->altura = altura;
    this->lado = largura;
}

double TrianguloI::getArea() {
    return (base * altura) / 2;
}

double TrianguloI::getPerimetro() {
    return (base + lado + lado);
}

#include "Retangulo.hpp"

Retangulo::Retangulo(double altura, double largura, bool boo) : Polygon(boo) {
    this->altura = altura;
    this->largura = largura;
}

double Retangulo::getArea() {
    return altura * largura;
}

double Retangulo::getPerimetro() {
    return ((altura * 2) + (largura * 2));
}

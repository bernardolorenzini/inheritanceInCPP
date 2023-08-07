#include "Polygon.hpp"
#include <iostream>

Polygon::Polygon(bool regular) {
    this->regular = regular;
}

void Polygon::printShape() {
    std::cout << "Area: " << this->getArea() << ", " << "Perimetro: " << this->getPerimetro() << ", " << "Regular: " << (this->regular ? "Sim" : "Não") << std::endl;
}

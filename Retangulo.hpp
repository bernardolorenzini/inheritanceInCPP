#pragma once
#include "Polygon.hpp"

class Retangulo : public Polygon {
private:
    double altura;
    double largura;

public:
    Retangulo(double altura, double largura, bool boo);

    double getArea() override;
    double getPerimetro() override;
};

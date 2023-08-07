#pragma once
#include "Polygon.hpp"

class TrianguloI : public Polygon {
private:
    double base;
    double altura;
    double lado;

public:
    TrianguloI(double base, double altura, double largura, bool boo);

    double getArea() override;
    double getPerimetro() override;
};

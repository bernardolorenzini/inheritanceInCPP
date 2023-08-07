#pragma once
#include "Polygon.hpp"

class Circulo : public Polygon {
private:
    float raio;
    const float pi;

public:
    Circulo(float raio, bool boo);

    double getArea() override;
    double getPerimetro() override;
};

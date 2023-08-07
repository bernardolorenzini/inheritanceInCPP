#pragma once

class Polygon {
protected:
    bool regular;

public:
    Polygon(bool regular);

    virtual double getArea() = 0;      // ABSTRACT  ------
    virtual double getPerimetro() = 0; // ABSTRACT  ------

    void printShape();
};

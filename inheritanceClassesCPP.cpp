#include <iostream>
#include <stdlib.h>
#include "Polygon.h'


using namespace std;

int main()
{
    TrianguloI *tri = new TrianguloI(21, 8, 10, true);
    Retangulo *ret = new Retangulo(5, 4, true);
    Circulo *cir = new Circulo(9, true);


    Polygon *pointer = ret;
    pointer->printShape();

    pointer = cir;
    pointer->printShape();

    pointer = tri;
    pointer->printShape();
}

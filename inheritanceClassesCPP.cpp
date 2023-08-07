//
//  array_list.h
//  
//
//  Created by Bernardo Lorenzini on 18/07/23.
//


#include <iostream>
#include <stdlib.h>
#include "Polygon.hpp"
#include "Retangulo.hpp"
#include "Triangulo.hpp"
#include "Circulo.hpp"


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

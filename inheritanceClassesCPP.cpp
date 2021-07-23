#include <iostream>
#include <stdlib.h>

using namespace std;

// ---------------- POLYGON CLASS ----------------

class Polygon {
protected:
    bool regular;

public:
    Polygon(bool regular) {
        this->regular = regular;
    }

    virtual double getArea() = 0;      // ABSTRACT  ------
    virtual double getPerimetro() = 0; // ABSTRACT  ------

    void printShape() {
        cout << "Area: " << this->getArea() << ", " << "Perimetro: " << this->getPerimetro() << ", " << "Regular: " << (this->regular ? "Sim" : "Não") << endl;
    }
};

// ---------------- RECTANGLE CLASS ----------------

class Retangulo: public Polygon{
private:
    double altura;
    float largura;

public:
    Retangulo(double altura, double largura,bool boo) : Polygon(boo)
    {
        this->altura = altura;
        this->largura = largura;
    }
    double getArea(){
        return altura * largura;
    }

    double getPerimetro(){
        return ((altura*2) + (largura*2));
    }

};

// ---------------- TRIANGLE CLASS ----------------


class TrianguloI: public Polygon
        {
private:
    double base;
    double altura;
    double lado;

public:
    TrianguloI(double base, double altura,double largura,bool boo) : Polygon(boo)
    {
        this->base = base;
        this->altura = altura;
        this->altura = altura;
    }
    double getArea(){
        return(base * altura)/2;
    }

    double getPerimetro(){
        return (base+lado+lado);
    }

};


// ---------------- CIRCLE CLASS ----------------


class Circulo: public Polygon
{
private:
    float raio;
    float pi = 3.14;

public:
    Circulo(float raio,bool boo) : Polygon(boo)
    {
        this->raio = raio;

    }
    double getArea(){
        return pi*(raio*raio);
    }

    double getPerimetro(){
        return 2*pi*raio;
    }
};

// ---------------- MAIN CLASS ----------------

int main()
{
    TrianguloI *triangulo = new TrianguloI(21, 8, 10, true);
    Retangulo *retangulo = new Retangulo(5, 4, true);
    Circulo *circulo = new Circulo(9, true);


    Polygon *pointer = retangulo;
    pointer->printShape();

    pointer = circulo;
    pointer->printShape();

    pointer = triangulo;
    pointer->printShape();
}
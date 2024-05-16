#ifndef Triangulo_hpp
#define Triangulo_hpp

#include "Punto.hpp"
#include "Punto.cpp"

#include <stdio.h>

using namespace std;

class Triangulo{

    private:
        Punto v1;
        Punto v2;
        Punto v3;

    public:
        //Método Constructor/Con Parámetros
        Triangulo();
        Triangulo(Punto _v1, Punto _v2, Punto _v3);
        
        //Métodos de Acceso
        Punto getVertice1();
        Punto getVertice2();
        Punto getVertice3();

        //Métodos Modificadores
        void setVertice1(Punto _v1);
        void setVertice2(Punto _v2);
        void setVertice3(Punto _v3);

        //Otros Métodos
        double perimetro();
        double area();
        string str();
};

#endif /* Triangulo_hpp */
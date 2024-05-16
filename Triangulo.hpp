#ifndef TRIANGULO_HPP
#define TRIANGULO_HPP

#include "Punto.hpp"

#include <stdio.h>

class Triangulo{

    private:
        Punto v1,v2,v3;

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
        std::string str();
};

#endif // TRIANGULO_HPP
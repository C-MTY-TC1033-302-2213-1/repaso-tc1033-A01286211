#ifndef PUNTO_HPP
#define PUNTO_HPP

#include <stdio.h>
#include <string>
#include <math.h>

class Punto{

private:
    double x, y;

public:
    //Método Constructor Default/Con Parámetros
    Punto();
    Punto(double _x, double _y);
        
    //Métodos de Acceso
    double getX();
    double getY();

    //Métodos Modificadores
    void setX(double _x);
    void setY(double _y);

    //Otros Métodos
    double calculaDistancia(Punto p2);
    std::string str();

};

#endif //PUNTO.HPP
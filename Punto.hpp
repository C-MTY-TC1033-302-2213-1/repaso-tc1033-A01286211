#ifndef Punto_hpp
#define Punto_hpp

#include <stdio.h>
#include <string>
#include <math.h>

using namespace std;

class Punto{

    private:

        double x;
        double y;

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
        string str();
};

#endif /* Punto_hpp */
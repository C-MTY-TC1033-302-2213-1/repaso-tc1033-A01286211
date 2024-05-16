#include "Punto.hpp"
using namespace std;

//Método Constructor Default/Con Parámetros
Punto::Punto(){
    x = 0;
    y = 0;
}
Punto::Punto(double _x, double _y){
    x = _x;
    y = _y;
}
    
//Métodos de Acceso
double Punto::getX(){
    return x;
}
double Punto::getY(){
    return y;
}

//Métodos Modificadores
void Punto::setX(double _x){
    x=_x;
}
void Punto::setY(double _y){
    y=_y;
}

//Otros Métodos
double Punto::calculaDistancia(Punto p2){
    return sqrt( (p2.x - x) * (p2.x - x) + (p2.y - y) * (p2.y - y) );
}
string Punto::str(){
    return "(" + to_string(x) + "," + to_string(y) + ")";
}

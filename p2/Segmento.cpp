#include "FigBase.h"
#include "Segmento.h"
#include <iostream>
#include <math.h>
using namespace std;

Segmento::Segmento(double x, double y, double x2, double y2, int e, int c, int t):FigBase(x,y,e,c,t){
    setX2(x2);
    setY2(y2);
}

void Segmento::setX2(double x2){
    this->x2 = x2;
}

void Segmento::setY2(double y2){
    this->y2 = y2;
}

double Segmento::getX2() const{
    return x2;
}

double Segmento::getY2() const{
    return y2;
}

float Segmento::area() const{
    return 0;
}

float Segmento::perimetro() const{
    float a = (getX() - x2) * (getX() - x2) + (getY() - y2) * (getY() - y2);
    
    return sqrt(a);
}

void Segmento::imprime() const{
    cout << "--- [Segmento] ---" << endl;
    FigBase::imprime();
    cout << " x2 = " << getX2() << " y2 = " << getY2() << endl;
    cout << " area = " << area() << " perimetro = " << perimetro() << endl;
}

void Segmento::le(){
    double x, y, x2, y2;
    int e, c, t;

    cin >> x >> y >> x2 >> y2 >> e >> c >> t;

    setX(x);
    setX2(x2);
    setY(y);
    setY2(y2);
    setEspessura(e);
    setCor(c);
    setTipo(t);
}

ostream &operator<<(ostream &out, const Segmento &seg){
    seg.imprime();
    return out;
}

istream &operator>>(istream &in, Segmento &seg){
    seg.le();
    return in;
}
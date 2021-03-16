#include "FigBase.h"
#include "Retangulo.h"
#include <iostream>
using namespace std;

Retangulo::Retangulo(double x, double y, double larg, double alt, int e, int c, int t):FigBase(x,y,e,c,t){
    setAltura(alt);
    setLargura(larg);
}

void Retangulo::setLargura(double larg){
    this->largura = larg;
}

void Retangulo::setAltura(double alt){
    this->altura = alt;
}

double Retangulo::getLargura() const{
    return largura;
}

double Retangulo::getAltura() const{
    return altura;
}

float Retangulo::area() const{
    return largura * altura;
}

float Retangulo::perimetro() const{
    return (largura * 2) + (altura * 2);
}

void Retangulo::imprime() const{
    cout << "--- [Retangulo] ---" << endl;
    FigBase::imprime();
    cout << " largura = " << getLargura() << " altura = " << getAltura() << endl;
    cout << " area = " << area() << " perimetro = " << perimetro() << endl;
}

void Retangulo::le(){
    double x, y, larg, alt;
    int e, c, t;

    cin >> x >> y >> larg >> alt >> e >> c >> t;

    setX(x);
    setY(y);
    setLargura(larg);
    setAltura(alt);
    setEspessura(e);
    setCor(c);
    setTipo(t);
}

ostream &operator<<(ostream &out, const Retangulo &ret){
    ret.imprime();
    return out;
}
    
istream &operator>>(istream &in, Retangulo &ret){
    ret.le();
    return in;
}
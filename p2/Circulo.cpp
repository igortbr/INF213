#include "FigBase.h"
#include "Circulo.h"
#include <iostream>
using namespace std;

Circulo::Circulo(double x, double y, double r, int e, int c, int t):FigBase(x,y,e,c,t){
    setRaio(r);
}

void Circulo::setRaio(int r){
    this->raio = r;
}

double Circulo::getRaio() const{
    return raio;
}

float Circulo::area() const{
    return raio * raio * 3.14159265359;
}

float Circulo::perimetro() const{
    return 2 * 3.14159265359 * raio;
}

void Circulo::imprime() const{
    cout << "--- [Circulo] ---" << endl;
    FigBase::imprime();
    cout << " raio = " << getRaio() << endl;
    cout << " area = " << area() << " perimetro = " << perimetro() << endl;
}

void Circulo::le(){
    double x, y, r;
    int e, c, t;

    cin >> x >> y >> r >> e >> c >> t;

    setX(x);
    setY(y);
    setRaio(r);
    setEspessura(e);
    setCor(c);
    setTipo(t);
}

ostream &operator<<(ostream &out, const Circulo &cir){
    cir.imprime();
    return out;
}
    
istream &operator>>(istream &in, Circulo &cir){
    cir.le();
    return in;
}
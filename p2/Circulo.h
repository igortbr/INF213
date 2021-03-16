#include "FigBase.h"
#include <iostream>
using namespace std;

class Circulo:public FigBase{
    private:
        double raio;

    public:
        Circulo(double = 0, double = 0, double = 0, int = 0, int = 0, int = 0);

        double getRaio() const;
        void setRaio(int);

        float area() const;

        float perimetro() const;

        void imprime() const;

        void le();

        friend ostream &operator<<(ostream &out, const Circulo &cir);
    
        friend istream &operator>>(istream &in, Circulo &cir);
};
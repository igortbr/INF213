#include "FigBase.h"
#include <iostream>
using namespace std;

class Segmento:public FigBase{
    private:
        double x2;
        double y2;

    public:
        Segmento(double = 0, double = 0, double = 0, double = 0, int = 0, int = 0, int = 0);

        double getX2() const;
        void setX2(double);

        double getY2() const;
        void setY2(double);

        float area() const;
        
        float perimetro() const;

        void imprime() const;

        void le();

    friend ostream &operator<<(ostream &out, const Segmento &seg);
    
    friend istream &operator>>(istream &in, Segmento &seg);
};
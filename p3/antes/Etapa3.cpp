#include <iostream>
using namespace std;

#include "FigBase.h"
#include "Retangulo.h"
#include "Circulo.h"
#include "Segmento.h"

int main(){
    FigBase *v[5];

    Circulo c1;
    Circulo c2;

    Retangulo r;

    Segmento s1;
    Segmento s2;

    v[0] = &c1;
    v[1] = &c2;
    v[2] = &r;
    v[3] = &s1;
    v[4] = &s2;

    return 0;
}
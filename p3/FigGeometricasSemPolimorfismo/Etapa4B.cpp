#include <iostream>
using namespace std;

#include "FigBase.h"
#include "Retangulo.h"
#include "Circulo.h"
#include "Segmento.h"

int main(){
    Retangulo r;
    Circulo c1;
    Circulo c2;
    Segmento s1;
    Segmento s2;
    
    FigBase *v[5];

    v[0] = &r;
    v[1] = &c1;
    v[2] = &c2;
    v[3] = &s1;
    v[4] = &s2;

    for (int i = 0; i < 5; i++){
        cout << "--- ELEMENTO " << (i+1) << " ---" << endl;
        cin >> (*v[i]);
        cout << endl;
    }

    cout << "\n IMPRIMINDO" << endl;
    for (int i = 0; i < 5; i++){
        cout << (*v[i]);
        cout << endl;
    }

    cout << " --------- DOBRANDO O RAIO --------- " << endl;

    for (int i = 0; i < 5; i++){
        // FAZ O DOWNCAST NO PONTEIRO FIGBASE PARA UM PONTEIRO CIRCULO
        Circulo *cPtr = dynamic_cast<Circulo *>(v[i]);

        if (cPtr != 0){ //0 SE FOR FIGBASE
            double raio = cPtr->getRaio();
            cPtr->setRaio(2 * raio);

            cout << *v[i] << endl;
        }

    }


    return 0;
}
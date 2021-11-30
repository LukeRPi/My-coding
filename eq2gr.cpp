#include <iostream>
#include <math.h>

using namespace std;

bool cmplx;
float d;

float delta(float a, float b, float c) {            // calcolo del delta
    d = b*b - float(4)*a*c;                         // delta = b^2 / 4ac
    if (d < 0)
    {
        cmplx = true;                               // se d < 0, il risultato sarà un numero complesso
        d = -d;                                     // rende d positivo
    } else
        cmplx = false;
    
    return d;
}

int main() {
    float a, b, c;
    cout << "Inserire a: ";
    cin >> a;
    cout << endl << "Inserire b: ";
    cin >> b;
    cout << endl << "Inserire c: ";
    cin >> c;
    if (a == 0) {                                   // verifica se a = 0, quindi equazione di primo grado
        cout << "In un'equazione di secondo grado, a deve essere diverso da 0" << endl;
        return 0;
    }
    
    d = delta(a,b,c);                                                      // calcola il delta

    if (cmplx == false) {
        float x1 = (-b+sqrt(d))/(2*a);                                     // calcola x1         
        float x2 = (-b-sqrt(d))/(2*a);                                     // calcola x1
        cout << "x1 = " << x1 << endl << "x2 = " << x2 << endl;            // stampa il risultato
    } else if (cmplx == true) {
        float rd = sqrt(d);                                                // calcola radice di delta (parte immaginaria del numero)
        float x = (-b)/(2*a);                                              // calcola la parte reale del numero
        cout << "x1 = " << x << "+" << rd << "i" << endl << "x2 = " << x << "-" << rd << "i" << endl;           // stampa il numero complesso
    }
}
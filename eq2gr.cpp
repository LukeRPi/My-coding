#include <iostream>
#include <math.h>

using namespace std;

bool cmplx;
float d;

float delta(float a, float b, float c) {
    d = b*b - float(4)*a*c;
    if (d < 0)
    {
        cmplx = true;
        d = -d;
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
    d = delta(a,b,c);
    if (cmplx == false)
    {
        float x1 = (-b+sqrt(d))/(2*a);
        float x2 = (-b-sqrt(d))/(2*a);
        cout << "x1 = " << x1 << endl << "x2 = " << x2 << endl;
    } else if (cmplx == true)
    {
        float rd = sqrt(d);
        float x = (-b)/(2*a);
        cout << "x1 = " << x << "+" << rd << "i" << endl << "x2 = " << x << "-" << rd << "i" << endl;
    }
}
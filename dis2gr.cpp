#include <iostream>
#include <math.h>

using namespace std;

bool AxeR;
float d;

void comparex(float x1, float x2){
    float xt;
    if (x2 < x1)
    {
        xt = x1;
        x1 = x2;
        x2 = xt;
    }
}

void results(float x1, float x2, string m){
    if (m == ">")
    {
        cout << "x < " << x1 << "  V  x > " << x2 << endl;
    } else if (m == "<"){
        cout << x1 << " < x < " << x2;
    }
}

void d0(float x1, string m){
    if (m == ">")
        cout << "Per ogni x diverso da " << x1 << endl;
    else if (m == "<")
        cout << "Non esiste x appartenente a R." << endl;
}

void segni(float a, float b, float c){
    if (a < 0){
        a = -a;
        b = -b;
        c = -c;
    }
}

float delta(float a, float b, float c) {
    d = b*b - float(4)*a*c;
    if (d < 0)
    {
        AxeR = true;
        d = -d;
    } else
        AxeR = false;
    return d;
}

int main() {
    float a, b, c;
    string m;
    cout << "Inserire a: ";
    cin >> a;
    cout << endl << "Inserire b: ";
    cin >> b;
    cout << endl << "Inserire c: ";
    cin >> c;
    cout << endl << "Inserire maggiore / minore: ";
    cin >> m;
    segni(a, b, c);
    d = delta(a,b,c);
    if (AxeR == false)
    {
        float x1 = (-b+sqrt(d))/(2*a);
        float x2 = (-b-sqrt(d))/(2*a);
        if (d == 0)
            d0(x1, m);
        else {
            comparex(x1, x2);
            results(x1, x2, m);
        }
    } else if (AxeR == true){
        if (m == ">")
            cout << "Per ogni x appartenete a R.";
        else if (m == "<")
            cout << "Non esiste x appartenente a R.";
        cout << endl;
    }     
}
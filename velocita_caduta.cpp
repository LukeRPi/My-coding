#include <iostream>
#include <math.h>
using namespace std;

int main() {
    float h;
    cout << "Inserisci altezza: ";
    cin >> h;
    float v = sqrt(float(2)*float(9.81)*h);         // calcolo velocità con formula v=sqrt(2gh)
    float vk = v*float(3.6);                        // conversione da m/s a km/h
    cout << "La velocità finale è di " << v << "m/s, ovvero " << vk << "km/h." << endl;
}

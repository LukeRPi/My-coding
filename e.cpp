#include <iostream>
#include <iomanip>
using namespace std;


int in;
double sum;

double factorial(int num) {
    unsigned long long int fatt;
    int input, prec;

    input = num;
    fatt = input;
    if (input <= 20)
    {
        for (int i = num; i > 1 ; i--){
         prec = num-1;
         fatt *= prec;
         num = prec;
        }
        return fatt;
    } else
        cout << "Il numero di iterazioni deve essere <= 20" << endl;
}

int main() {
    double uno = 1;
    cout << "Calcolo e con metodo del fattoriale" << endl << "Numero iterazioni: ";
    cin >> in;
    for (int t = 1; t < in; t++)
    {
        sum += uno/factorial(t);
    }
    cout << fixed << setprecision(51) << 1+sum << endl;

}


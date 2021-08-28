#include <iostream>
#include <iomanip>
using namespace std;


int in;
double sum;

double factorial(int num) {                     // calcola il fattoriale del numero passato alla funzione
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
        cout << "Il numero di iterazioni deve essere <= 20" << endl;        // il numero deve essere <= 20, altrimenti la dimensione in byte del fattoriale saà maggiore della dimensione massima per la variabile double
}

int main() {
    double uno = 1;
    cout << "Calcolo e con metodo del fattoriale" << endl << "Numero iterazioni: ";
    cin >> in;
    for (int t = 1; t < in; t++)
    {
        sum += uno/factorial(t);
    }
    cout << fixed << setprecision(51) << 1+sum << endl;             // stampa a schermo il risultato+1 con 51 cifre decimali

}


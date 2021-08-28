#include <iostream>
using namespace std;
int a, b, c;                            // dichiara le variabili a,b e c

int main() {
    cout << "Inserisci un numero: ";    // visualizza a schermo il testo tra virgolette
    cin >> a;                           // rileva ciò che viene digitato a schermo

    cout << "Inserisci un numero: ";
    cin >> b;


    c = a + b;                          // fai la somma dei numeri

    cout << "La somma è " << c << endl; // visualizza a schermo il risultato e una riga vuota
}
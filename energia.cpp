/*
Formule:
	Energia potenziale: U = m * g * h
	Energia cinetica: K = 0.5 * m * v^2
*/

#include <iostream>
using namespace std;

int scelta;
float m, h, u, vk, v, k;
int main() {
	cout << "-----------------------------------------------------" << endl;
	cout << "-       Calcolo energia potenziale / cinetica       -" << endl;
	cout << "-                  by LukeStarGeek                  -" << endl;
	cout << "-----------------------------------------------------" << endl;
	cout << "1. Energia potenziale" << endl;
	cout << "2. Energia cinetica" << endl;
	cout << "Calcolo: ";
	cin >> scelta;
	cout << endl << "Inserisci la massa: ";
	cin >> m;
	cout << endl;
	if (scelta == 1) {
		cout << "Inserisci l'altezza: ";
		cin >> h;
		u = m * 9.81 * h;
		cout << "Energia potenziale: " << u << " J" << endl;
	} else if (scelta == 2) {
		cout << "Inserisci la velocità: ";
		cin >> vk;
		v = vk / 3.6;					// converte la velocità da km/h a m/s
		k = 0.5 * m * v * v;
		cout << "Energia cinetica: " << k << " J" << endl;
	}
}

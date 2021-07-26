#include <iostream>
#include <algorithm>
using namespace std;

 
struct Squadra 
{
    string nome;
    int totale; 
    int posizione; 
    int vittorie;
    int pareggi;
    int sconfitte;
};


void ottieniPartite(Squadra s[], int n) {
    for (int i = 0; i < n; i++)
    {
        cout << "Squadra: " << s[i].nome << endl;
        cout << "Partite vinte: ";
        cin >> s[i].vittorie;
        cout << "Partite perse: ";
        cin >> s[i].sconfitte;
        cout << "Partite pareggiate: ";
        cin >> s[i].pareggi;
        cout << endl;
    }

}

bool confrontaSquadre(Squadra a, Squadra b)
{

    // true se a>b quindi nella classifica in sort a verrà prima di b
        return a.totale > b.totale;
 
}
 

void calcolaPunti(Squadra s[], int n)
{

    for (int i = 0; i < n; i++)
    {
        s[i].totale = (s[i].vittorie)*3 + (s[i].pareggi);
    }
    
    
    // se confrontaSquadre è true, il primo elemento ha il voto maggiore
    // sort passa a confrontaSquadre due elementi della struttura (chiamati a e b nella funzione)
    sort(s, s + 20, confrontaSquadre);
 
    // l'array di strutture è già in ordine, quindi s[0] avrà il punteggio maggiore
    // di conseguenza la sua posizione in classifica è i + 1
    for (int i = 0; i < n; i++)
        s[i].posizione = i + 1;
}
 

int main()
{
    int n = 20;
 
    // array di strutture
    Squadra s[n];
 
    s[0].nome = "Inter";
    s[1].nome = "Milan";
    s[2].nome = "Juventus";
    s[3].nome = "Atalanta";
    s[4].nome = "Napoli";
    s[5].nome = "Fiorentina";
    s[6].nome = "Cagliari";
    s[7].nome = "Lazio";
    s[8].nome = "Roma";
    s[9].nome = "Sassuolo";
    s[10].nome = "Benevento";
    s[11].nome = "Bologna";
    s[12].nome = "Crotone";
    s[13].nome = "Genoa";
    s[14].nome = "Parma";
    s[15].nome = "Sampdoria";
    s[16].nome = "Verona";
    s[17].nome = "Spezia";
    s[18].nome = "Torino";
    s[19].nome = "Udinese";

    

    ottieniPartite(s, n);
    
    calcolaPunti(s, n);
 
    
    cout << "Posizione"
         << "   "
         << "Punteggio"
         << "    ";
    cout << "Squadra"
         << " \n";
 
    for (int i = 0; i < n; i++) {
        cout << s[i].posizione << "              ";
        cout << s[i].totale << "      ";
        cout << s[i].nome << " ";
        cout << "\n";
    }
 
    return 0;
}
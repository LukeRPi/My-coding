#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

string monthString[] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };

//======================================================================

void getTm(int &year, int &month, int &day)
{
   time_t tt;
   time( &tt );
   tm TM = *localtime( &tt );

   year    = TM.tm_year + 1900;
   month   = TM.tm_mon + 1 ;
   day     = TM.tm_mday;
   
}

void getBir(int &ngiorno, int &nmese, int &nanno) {
    cout << "Inserisci giorno di nascita: ";
    cin >> ngiorno;
    cout << "Inserisci mese di nascita: ";
    cin >> nmese;
    cout << "Inserisci anno di nascita: ";
    cin >> nanno;
}

int leapyear(int a1, int a2) {
    int bis=0;
    for (a1; a1 < a2; a1++)
    {
        if(((a1%4==0)&&(a1%100!=0))||(a1%400==0)) 
        bis += 1;
    }
    return bis;
   
}


//======================================================================


int main()
{

   int year, month, day, hour, mins, secs, weekDay;
   int ngiorno, nmese, nanno;
   int dgiorni, dmesi, danni;
   int vgiorni;
   
   cout << "DISCLAIMER: i giorni non sono precisi, poiché non è stato implementato il calcolo dei giorni in un mese (30/31)" << endl;
   getBir(ngiorno, nmese, nanno);
   getTm(year, month, day);
   
   dgiorni = day - ngiorno;
   dmesi = month - nmese;
   danni = year - nanno;
   if (dgiorni < 0)
   {
       dmesi -= 1;
       dgiorni += 31;
   }
   if (dmesi < 0)
   {
       danni -= 1;
       dmesi += 12;
   }
   
   cout << endl;
   cout << "Hai " << dgiorni << " giorni, " << dmesi << " mesi, " << danni << " anni." << endl;
   vgiorni = danni*365 + dmesi*31 + dgiorni + leapyear(nanno, year);
   cout << "Hai vissuto: " << endl;
   cout << vgiorni << " giorni, o" << endl;
   cout << vgiorni*24 << " ore, oppure" << endl;
   cout << vgiorni*24*60 << " minuti." << endl;
}

#include <iostream>

#include "KsiazkaAdresowa.h"

using namespace std;

int main()
{
    KsiazkaAdresowa ksiazkaAdresowa ("Uzytkownicy.txt", "Adresaci.txt");
    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
    int idZalogowamegoUzytkownika = ksiazkaAdresowa.logowanieUzytkownika();
    ksiazkaAdresowa.dodajAdresata(idZalogowamegoUzytkownika);
    ksiazkaAdresowa.dodajAdresata(idZalogowamegoUzytkownika);
    ksiazkaAdresowa.dodajAdresata(idZalogowamegoUzytkownika);
    //ksiazkaAdresowa.wyswietlWszystkichAdresatow();
//  ksiazkaAdresowa.rejestracjaUzytkownika();
    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();

    return 0;
}

#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include <iostream>
#include <string>

#include "UzytkownikMenedzer.h"
#include "AdresatMenedzer.h"

using namespace std;

class KsiazkaAdresowa
{
    //int idOstatniegoAdresata;
   // int idUsunietegoAdresata;
   int idZalogowanegoUzytkownika;
   UzytkownikMenedzer uzytkownikMenedzer;
   AdresatMenedzer adresatMenedzer;
   const string nazwaPlikuZUzytkownikami;
   const string nazwaPlikuZUzytkownikam;

public:
    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami, string nazwaPlikuZAdresatami) : uzytkownikMenedzer(nazwaPlikuZUzytkownikami), adresatMenedzer(nazwaPlikuZAdresatami)
    {
    uzytkownikMenedzer.wczytajUzytkownikowZPliku();
//    adresatMenedzer.wczytajAdresatowZPliku(idZalogowanegoUzytkownika);
    };
    void rejestracjaUzytkownika();
    int logowanieUzytkownika();
    int wylogowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
    void wypiszWszystkichUzytkownikow();
    int dodajAdresata(int idZalogowanegoUzytkownika);
    //void wyswietlWszystkichAdresatow();
};
#endif // KSIAZKAADRESOWA_

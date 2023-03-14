#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include <iostream>
#include <string>

#include "UzytkownikMenedzer.h"
#include "AdresatMenedzer.h"

using namespace std;

class KsiazkaAdresowa
{
   int idZalogowanegoUzytkownika;
   UzytkownikMenedzer uzytkownikMenedzer;
   AdresatMenedzer adresatMenedzer;

   const string nazwaPlikuZUzytkownikami;
   const string nazwaPlikuZAdresatami;

public:
    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami, string nazwaPlikuZAdresatami) : uzytkownikMenedzer(nazwaPlikuZUzytkownikami), adresatMenedzer(nazwaPlikuZAdresatami)
    {
    uzytkownikMenedzer.wczytajUzytkownikowZPliku();
    adresatMenedzer.wczytajAdresatowZalogowanegoUzytkownikaZPliku(idZalogowanegoUzytkownika);
    };
    void rejestracjaUzytkownika();
    int logowanieUzytkownika();
    int wylogowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
    void wypiszWszystkichUzytkownikow();
    void dodajAdresata(int idZalogowanegoUzytkownika);
    void wyswietlWszystkichAdresatow();
    void wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
};
#endif // KSIAZKAADRESOWA_

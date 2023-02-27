#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include <iostream>
#include <string>

#include "UzytkownikMenedzer.h"

using namespace std;

class KsiazkaAdresowa
{
    //int idOstatniegoAdresata;
   // int idUsunietegoAdresata;
   UzytkownikMenedzer uzytkownikMenedzer;
   AdresatMenedzer adresatMenedzer;
   const string nazwaPlikuZUzytkownikami;
   const string nazwaPlikuZAdresatami;

public:
    //string wczytajLinie();
    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami, string nazwaPlikuZAdresatami) : uzytkownikMenedzer(nazwaPlikuZUzytkownikami), adresatMenedzer(nazwaPlikuZAdresatami)
    {
    uzytkownikMenedzer.wczytajUzytkownikowZPliku();
    adresatMenedzer.wczytajAdresatowZPliku();
    };
    void rejestracjaUzytkownika();
    int logowanieUzytkownika();
    int wylogowanieUzytkownika();
    void wypiszWszystkichUzytkownikow();
    void wyswietlWszytskichAdresatow();
};
#endif // KSIAZKAADRESOWA_

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
   const string nazwaPlikuZUzytkownikami;

public:
    //string wczytajLinie();
    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami) : uzytkownikMenedzer(nazwaPlikuZUzytkownikami)
    {
    uzytkownikMenedzer.wczytajUzytkownikowZPliku();
    };
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
};
#endif // KSIAZKAADRESOWA_

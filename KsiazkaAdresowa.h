#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include <iostream>

#include "UzytkownikMenedzer.h"

using namespace std;

class KsiazkaAdresowa
{
    //int idOstatniegoAdresata;
   // int idUsunietegoAdresata;
   UzytkownikMenedzer uzytkownikMenedzer;

public:
    //string wczytajLinie();
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
};
#endif // KSIAZKAADRESOWA_

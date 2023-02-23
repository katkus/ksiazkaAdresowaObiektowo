#ifndef ADRESATMENEDZER_H
#define ADRESATMENEDZER_H

#include <iostream>
#include <vector>
#include <cstdlib> //windows.h
#include <fstream>
#include <sstream>

#include "Uzytkownik.h"
#include "Adresat.h"
#include "PlikZAdresatami.h"
#include "MetodyPomocnicze.h"

using namespace std;

class AdresatMenedzer
{
    int idZalogowanegoUzytkownika;
    int idOstatniegoAdresata;
    vector <Adresat> adresaci;
    const string nazwaPlikuZAdresatami;

    Adresat podajDaneNowegoAdresata();
    int pobierzIdNowegoUzytkownika();
    bool czyIstniejeLogin(string login);
    PlikZAdresatami plikZAdresatami;

public:
   AdresatMenedzer (string nazwaPlikuZAdresatami) : plikZAdresatami(nazwaPlikuZAdresatami){};
   // int wylogowanieUzytkownika();
   // void wypiszWszystkichAdresatow();
   void wczytajAdresatowZPliku();
} ;
#endif // ADRESATMENEDZER_H

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
    int idOstatniegoAdresata;
    int idZalogowanegoUzytkownika;
    vector <Adresat> adresaci;
    //Adresat adresat;
    Uzytkownik uzytkownik;
    const string nazwaPlikuZAdresatami;

    //Adresat podajDaneNowegoAdresata();
    //int pobierzIdNowegoUzytkownika();
    PlikZAdresatami plikZAdresatami;
    void wyswietlDaneAdresata(Adresat adresat);

public:
    AdresatMenedzer (string nazwaPlikuZAdresatami) : plikZAdresatami(nazwaPlikuZAdresatami)
    {

    };
    int dodajAdresata(int idZalogowanegoUzytkownika);
    Adresat podajDaneNowegoAdresata(int idZalogowanegoUzytkownika);
    void wyswietlWszystkichAdresatow();
    //void wczytajAdresatowZPliku();
} ;
#endif // ADRESATMENEDZER_H

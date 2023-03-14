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
    const string nazwaPlikuZAdresatami;

    PlikZAdresatami plikZAdresatami;
    void wyswietlDaneAdresata(Adresat adresat);

public:
    AdresatMenedzer (string nazwaPlikuZAdresatami) : plikZAdresatami(nazwaPlikuZAdresatami)
    {
        idOstatniegoAdresata = 0;
        adresaci = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(idZalogowanegoUzytkownika);
        idOstatniegoAdresata = plikZAdresatami.wyszukajIdOstatniegoAdresata();
    };
    void dodajAdresata(int idZalogowanegoUzytkownika);
    Adresat podajDaneNowegoAdresata(int idZalogowanegoUzytkownika);
    void wyswietlWszystkichAdresatow();
    void wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
} ;
#endif // ADRESATMENEDZER_H


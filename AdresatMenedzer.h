#ifndef ADRESATMENEDZER_H
#define ADRESATMENEDZER_H

#include <iostream>
#include <vector>
#include <cstdlib> //windows.h
#include <sstream>

#include "Adresat.h"
#include "PlikZAdresatami.h"

using namespace std;

class AdresatMenedzer
{
    const int ID_ZALOGOWANEGO_UZYTKOWNIKA;
    vector <Adresat> adresaci;
    PlikZAdresatami plikZAdresatami;

    Adresat podajDaneNowegoAdresata();
    void wyswietlDaneAdresata(Adresat adresat);


public:
    AdresatMenedzer (string nazwaPlikuZAdresatami, int idZalogowanegoUzytkownika)
    : ID_ZALOGOWANEGO_UZYTKOWNIKA(idZalogowanegoUzytkownika), plikZAdresatami(nazwaPlikuZAdresatami)
    {
        adresaci = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(ID_ZALOGOWANEGO_UZYTKOWNIKA);
    };
    void dodajAdresata();
    void wyswietlWszystkichAdresatow();
    void wyswietlIloscWyszukanychAdresatow(int iloscAdresatow);
    void wyszukajAdresatowPoImieniu();
    void wyszukajAdresatowPoNazwisku();
    int podajIdWybranegoAdresata();
    void usunAdresata();
    char wybierzOpcjeZMenuEdycja();
    void edytujAdresata();
} ;
#endif // ADRESATMENEDZER_H


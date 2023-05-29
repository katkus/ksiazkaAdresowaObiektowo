#ifndef PLIKZADRESATAMI_H
#define PLIKZADRESATAMI_H

#include <iostream>
#include <vector>
#include <fstream>
#include <cstdlib>
#include <string>

#include "Adresat.h"
#include "MetodyPomocnicze.h"

using namespace std;

class PlikZAdresatami
{
   const string NAZWA_PLIKU_Z_ADRESATAMI;
   const string NAZWA_TYMCZASOWEGO_PLIKU_Z_ADRESATAMI;
   int idOstatniegoAdresata;

   string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
   int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
   int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
   string pobierzLiczbe(string tekst, int pozycjaZnaku);
   Adresat pobierzDaneAdresata(string AdresataOddzielonePionowymiKreskami);


public:
    PlikZAdresatami(string nazwaPlikuZAdresatami) : NAZWA_PLIKU_Z_ADRESATAMI (nazwaPlikuZAdresatami)//, NAZWA_TYMCZASOWEGO_PLIKU_Z_ADRESATAMI (nazwaTymczasowegoPlikuZAdresatami)
    {
        idOstatniegoAdresata=0;
    };
    bool dopiszAdresataDoPliku(Adresat adresat);
    vector <Adresat> wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
    int pobierzIdOstatniegoAdresata();
    int zwrocNumerLiniiSzukanegoAdresata(int idAdresata);
   void usunPlik(string nazwaPlikuZRozszerzeniem);
   void zmienNazwePliku(string staraNazwa, string nowaNazwa);
   void usunWybranaLinieWPliku(int numerUsuwanejLinii);
};
#endif // PLIKZADRESATAMI_H


#ifndef PLIKZADRESATAMI_H
#define PLIKZADRESATAMI_H

#include <iostream>
#include <vector>
#include <fstream>
#include <cstdlib>
#include <string>

#include "Adresat.h"
#include "MetodyPomocnicze.h"
#include "PlikTekstowy.h"

using namespace std;

class PlikZAdresatami : public PlikTekstowy
{
   int idOstatniegoAdresata;

   string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
   int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
   int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
   Adresat pobierzDaneAdresata(string AdresataOddzielonePionowymiKreskami);
   void usunPlik(string nazwaPlikuZRozszerzeniem);
   void zmienNazwePliku(string staraNazwa, string nowaNazwa);
   void edytujWybranaLinieWPliku(int idEdytowanegoAdresata, string liniaZDanymiAdresataOddzielonePionowymiKreskami);


public:
    PlikZAdresatami(string nazwaPlikuZAdresatami) : PlikTekstowy(nazwaPlikuZAdresatami)
    {
        idOstatniegoAdresata=0;
    };
    bool dopiszAdresataDoPliku(Adresat adresat);
    vector <Adresat> wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
    int pobierzIdOstatniegoAdresata();
    void usunWybranaLinieWPliku(int idUsuwanegoAdresata);
    void zaktualizujDaneWybranegoAdresata(Adresat adresat);
};
#endif // PLIKZADRESATAMI_H


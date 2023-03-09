#ifndef PLIKZADRESATAMI_H
#define PLIKZADRESATAMI_H

#include <iostream>
#include <vector>
#include <fstream>
#include <cstdlib>
#include <string>
#include <algorithm>

#include "Adresat.h"
#include "MetodyPomocnicze.h"

using namespace std;

class PlikZAdresatami
{
   const string nazwaPlikuZAdresatami;
   int idOstatniegoAdresat;

   //bool czyPlikJestPusty();
   string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
   //Adresat pobierzDaneAdresata(string daneJednegoAdresataOddzielonePionowymiKreskami);

public:
    PlikZAdresatami(string NAZWAPLIKUZADRESATAMI) : nazwaPlikuZAdresatami(NAZWAPLIKUZADRESATAMI) {};
    string zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst);
    void dopiszAdresataDoPliku(Adresat adresat);
    //vector <Adresat> wczytajAdresatowZalogowanegoUzytkownikaZPliku();
};
#endif // PLIKZADRESATAMI_H


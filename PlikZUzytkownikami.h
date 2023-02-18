#ifndef PLIKZUZYTKOWNIKAMI_H
#define PLIKZUZYTKOWNIKAMI_H

#include <iostream>
#include <vector>
#include <fstream>
#include <cstdlib>
#include <string>

#include "Uzytkownik.h"
#include "MetodyPomocnicze.h"

using namespace std;

class PlikZUzytkownikami
{
   string nazwaPlikuZUzytkownikami;
   fstream plikTekstowy;
   string daneJednegoUzytkownikaOddzielonePionowymiKreskami;
   string pojedynczaDanaUzytkownika;
   int numerPojedynczejDanejUzytkownika;

   vector <Uzytkownik> uzytkownicy;

   bool czyPlikJestPusty();
   string zamienDaneUzytkownikaNaLinieZDanymiOddzielonaPionowymiKreskami(Uzytkownik uzytkownik);
   //Uzytkownik wczytajUzytkownikowZPliku();
   Uzytkownik pobierzDaneUzytkownika(string daneJednegoUzytkownikaOddzielonePionowymiKreskami);

public:
    PlikZUzytkownikami();
    void dopiszUzytkownikaDoPliku(Uzytkownik uzytkownik);
    vector <Uzytkownik> wczytajUzytkownikowZPliku();
};
#endif // PLIKZUZYTKOWNIKAMI_H


#include <iostream>

#include "KsiazkaAdresowa.h"

using namespace std;

int main()
{
    KsiazkaAdresowa ksiazkaAdresowa ("Uzytkownicy.txt", "Adresaci.txt");

  char wybor;

    while (true)
    {
        if (!ksiazkaAdresowa.czyUzytkownikJestZalogowany())
        {
            wybor = ksiazkaAdresowa.wybierzOpcjeZMenuGlownego();

            switch (wybor)
            {
            case '1':
                ksiazkaAdresowa.rejestracjaUzytkownika();
                break;
            case '2':
                ksiazkaAdresowa.logowanieUzytkownika();
                break;
            case '9':
                exit(0);
                break;
            default:
                cout << endl << "Nie ma takiej opcji w menu." << endl << endl;
                system("read"); // Windows system("pause")
                break;
            }
        }
        else
        {
            wybor = ksiazkaAdresowa.wybierzOpcjeZMenuUzytkownika();

            switch (wybor)
            {
            case '1':
                ksiazkaAdresowa.dodajAdresata();
                break;
            case '2':
                ksiazkaAdresowa.wyszukajAdresatowPoImieniu();
                break;
            case '3':
                ksiazkaAdresowa.wyszukajAdresatowPoNazwisku();
                break;
            case '4':
                ksiazkaAdresowa.wyswietlWszystkichAdresatow();
                break;
            case '5':
                ksiazkaAdresowa.usunAdresata();
                break;
            case '6':
                ksiazkaAdresowa.edytujAdresata();
                break;
            case '7':
                ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();
                break;
            case '8':
                ksiazkaAdresowa.wylogowanieUzytkownika();
                break;
            }
        }
    }
        return 0;
}

//#include "KsiazkaAdresowa.h"
#include "AdresatMenedzer.h"
//#include "Adresat.h"
//#include "PlikZAdresatami.h"

    int _main()
{
 //       PlikZAdresatami plikZAdresatami();
        AdresatMenedzer adresatMenedzer("AdresaciTest.txt",1);

        vector <Adresat> adresaci;
//        AdresatMenedzer adresatMenedzer;

//        adresaci = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku();
       // adresatMenedzer.wyszukajAdresatowPoImieniu();
        //adresatMenedzer.wyszukajAdresatowPoNazwisku();
        adresatMenedzer.wyswietlWszystkichAdresatow();
        //adresatMenedzer.edytujAdresata();
        adresatMenedzer.usunAdresata();
        adresatMenedzer.wyswietlWszystkichAdresatow();

    return 0;
}


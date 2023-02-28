#include "KsiazkaAdresowa.h"

/*string wczytajLinie()
{
    string wejscie = "";
    getline(cin, wejscie);
    return wejscie;
}*/
/*KsiazkaAdresowa::KsiazkaAdresowa()
{
    uzytkownikMenedzer.wczytajUzytkownikowZPliku();
}*/
void KsiazkaAdresowa::rejestracjaUzytkownika()
{
    uzytkownikMenedzer.rejestracjaUzytkownika();
}
int KsiazkaAdresowa::logowanieUzytkownika()
{
    uzytkownikMenedzer.logowanieUzytkownika();
}
int KsiazkaAdresowa::wylogowanieUzytkownika()
{
    uzytkownikMenedzer.wylogowanieUzytkownika();
}
void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika()
{
    uzytkownikMenedzer.zmianaHaslaZalogowanegoUzytkownika();
}
void KsiazkaAdresowa::wypiszWszystkichUzytkownikow()
{
    uzytkownikMenedzer.wypiszWszystkichUzytkownikow();
}

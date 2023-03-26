#include "KsiazkaAdresowa.h"

void KsiazkaAdresowa::rejestracjaUzytkownika()
{
    uzytkownikMenedzer.rejestracjaUzytkownika();
}
int KsiazkaAdresowa::logowanieUzytkownika()
{
    int idZalogowanegoUzytkownika = uzytkownikMenedzer.logowanieUzytkownika();
    adresatMenedzer.setIdZalogowanegoUzytkownika(idZalogowanegoUzytkownika);
    adresatMenedzer.wczytajAdresatowZalogowanegoUzytkownikaZPliku();
}
void KsiazkaAdresowa::wylogowanieUzytkownika()
{
    uzytkownikMenedzer.wylogowanieUzytkownika();
    adresatMenedzer.setIdZalogowanegoUzytkownika(0);
    adresatMenedzer.clearVectorAdresaci();
}
void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika()
{
    uzytkownikMenedzer.zmianaHaslaZalogowanegoUzytkownika();
}
void KsiazkaAdresowa::wypiszWszystkichUzytkownikow()
{
    uzytkownikMenedzer.wypiszWszystkichUzytkownikow();
}
void KsiazkaAdresowa::dodajAdresata()
{
    adresatMenedzer.dodajAdresata();
}
void KsiazkaAdresowa::wyswietlWszystkichAdresatow()
{
    adresatMenedzer.wyswietlWszystkichAdresatow();
}

#include "AdresatMenedzer.h"

/*void UzytkownikMenedzer::rejestracjaUzytkownika()
{
    Uzytkownik uzytkownik = podajDaneNowegoUzytkownika();

    uzytkownicy.push_back(uzytkownik);
    plikZUzytkownikami.dopiszUzytkownikaDoPliku(uzytkownik);

    cout << endl << "Konto zalozono pomyslnie" << endl << endl;
    system("pause");
}*/
/*void Adresat::wylogowanieUzytkownika()
{
    idZalogowanegoUzytkownika = 0;
    adresaci.clear();
    return idZalogowanegoUzytkownika;
}*/
/*Uzytkownik UzytkownikMenedzer::podajDaneNowegoUzytkownika()
{
    Uzytkownik uzytkownik;

    uzytkownik.ustawId(pobierzIdNowegoUzytkownika());

    string login;
    do
    {
        cout << "Podaj login: ";
//        login = wczytajLinie();
        cin >> login;
        uzytkownik.ustawLogin(login);
    }
    while (czyIstniejeLogin(uzytkownik.pobierzLogin()) == true);

    string haslo;
    cout << "Podaj haslo: ";
    //haslo = wczytajLinie();
    cin >> haslo;

    uzytkownik.ustawHaslo(haslo);

    return uzytkownik;
}
int UzytkownikMenedzer::pobierzIdNowegoUzytkownika()
{
    if (uzytkownicy.empty() == true)
        return 1;
    else
        return uzytkownicy.back().pobierzId()+ 1;
}
bool UzytkownikMenedzer::czyIstniejeLogin(string login)
{
    for (int i = 0; i < uzytkownicy.size(); i++)
    {
        if (uzytkownicy[i].pobierzLogin() == login)
        {
            cout << endl << "Istnieje uzytkownik o takim loginie." << endl;
            return true;
        }

    }
    return false;
}
 void UzytkownikMenedzer::wypiszWszystkichUzytkownikow()
 {
    for (int i = 0; i < uzytkownicy.size(); i++)
    {
        cout << uzytkownicy[i].pobierzId() << endl;
        cout << uzytkownicy[i].pobierzLogin() << endl;
        cout << uzytkownicy[i].pobierzHaslo() << endl;

    }
 }*/
void AdresatMenedzer::wczytajAdresatowZPliku()
{
   adresaci = plikZAdresatami.wczytajAdresatowZPliku();
}
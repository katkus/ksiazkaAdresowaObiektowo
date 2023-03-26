#include "AdresatMenedzer.h"

void AdresatMenedzer::dodajAdresata()
{
    Adresat adresat;

    system("clear");//Windows system("cls")
    cout << " >>> DODAWANIE NOWEGO ADRESATA <<<" << endl << endl;
    adresat = podajDaneNowegoAdresata(idZalogowanegoUzytkownika);

    adresaci.push_back(adresat);
    plikZAdresatami.dopiszAdresataDoPliku(adresat);
}
Adresat AdresatMenedzer::podajDaneNowegoAdresata(int idZalogowanegoUzytkownika)
{
    Adresat adresat;
    int noweId, noweIdUzytkownika;
    string noweImie, noweNazwisko, nowyNumerTelefonu, nowyEmail, nowyAdres;

    noweId = (plikZAdresatami.wyszukajIdOstatniegoAdresata()+1);
    adresat.ustawId(noweId);
    noweIdUzytkownika = idZalogowanegoUzytkownika;
    adresat.ustawIdUzytkownika(noweIdUzytkownika);

    cout << "Podaj imie: ";
    noweImie = MetodyPomocnicze::wczytajLinie();
    noweImie = MetodyPomocnicze::zamienPierwszaLitereNaDuzaAPozostaleNaMale(noweImie);
    adresat.ustawImie(noweImie);

    cout << "Podaj nazwisko: ";
    noweNazwisko = MetodyPomocnicze::wczytajLinie();
    noweNazwisko = MetodyPomocnicze::zamienPierwszaLitereNaDuzaAPozostaleNaMale(noweNazwisko);
    adresat.ustawNazwisko(noweNazwisko);

    cout << "Podaj numer telefonu: ";
    nowyNumerTelefonu = MetodyPomocnicze::wczytajLinie();
    adresat.ustawNumerTelefonu(nowyNumerTelefonu);

    cout << "Podaj email: ";
    nowyEmail = MetodyPomocnicze::wczytajLinie();
    adresat.ustawEmail(nowyEmail);

    cout << "Podaj adres: ";
    nowyAdres = MetodyPomocnicze::wczytajLinie();
    adresat.ustawAdres(nowyAdres);

    return adresat;
}
void AdresatMenedzer::wyswietlDaneAdresata(Adresat adresat)
{
    cout << endl << "Id:                 " << adresat.pobierzId() << endl;
    cout << "Imie:               " << adresat.pobierzImie() << endl;
    cout << "Nazwisko:           " << adresat.pobierzNazwisko() << endl;
    cout << "Numer telefonu:     " << adresat.pobierzNumerTelefonu()<< endl;
    cout << "Email:              " << adresat.pobierzEmail() << endl;
    cout << "Adres:              " << adresat.pobierzAdres() << endl;
}
void AdresatMenedzer::wyswietlWszystkichAdresatow()
{
    system("clear");//Windows system("cls")
    if (!adresaci.empty())
    {
        cout << "             >>> ADRESACI <<<" << endl;
        cout << "-----------------------------------------------" << endl;
        for (vector <Adresat> :: iterator itr = adresaci.begin(); itr != adresaci.end(); itr++)
        {
            wyswietlDaneAdresata(*itr);
        }
        cout << endl;
    }
    else
    {
        cout << endl << "Ksiazka adresowa jest pusta." << endl << endl;
    }
    system("read"); // Windows system("pause")
}
void AdresatMenedzer::wczytajAdresatowZalogowanegoUzytkownikaZPliku()
{
    adresaci = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(idZalogowanegoUzytkownika);
}
void AdresatMenedzer::setIdZalogowanegoUzytkownika(int idZalogowanegoUzytkownika)
{
    this->idZalogowanegoUzytkownika = idZalogowanegoUzytkownika;
}
 void AdresatMenedzer::clearVectorAdresaci()
 {
     adresaci.clear();
 }

#include "PlikZUzytkownikami.h"

PlikZUzytkownikami::PlikZUzytkownikami()
{
    nazwaPlikuZUzytkownikami = "Uzytkownicy.txt";
    daneJednegoUzytkownikaOddzielonePionowymiKreskami = "";
    string pojedynczaDanaUzytkownika = "";
    int numerPojedynczejDanejUzytkownika = 1;
    string liniaZDanymiUzytkownika = "";
}
void PlikZUzytkownikami::dopiszUzytkownikaDoPliku(Uzytkownik uzytkownik)
{
    string liniaZDanymiUzytkownika;
   // PlikZUzytkownikami plikZUzytkownikami;
    plikTekstowy.open(nazwaPlikuZUzytkownikami.c_str(), ios::app);

    if (plikTekstowy.good() == true)
    {
        liniaZDanymiUzytkownika = zamienDaneUzytkownikaNaLinieZDanymiOddzielonaPionowymiKreskami(uzytkownik);

        if (czyPlikJestPusty() == true)
        {
            plikTekstowy << liniaZDanymiUzytkownika;
        }
        else
        {
            plikTekstowy << endl << liniaZDanymiUzytkownika ;
        }
    }
    else
        cout << "Nie udalo sie otworzyc pliku " << nazwaPlikuZUzytkownikami << " i zapisac w nim danych." << endl;
    plikTekstowy.close();
}

bool PlikZUzytkownikami::czyPlikJestPusty()
{
    plikTekstowy.seekg(0, ios::end);
    if (plikTekstowy.tellg() == 0)
        return true;
    else
        return false;
}
string PlikZUzytkownikami::zamienDaneUzytkownikaNaLinieZDanymiOddzielonaPionowymiKreskami(Uzytkownik uzytkownik)
{
    string liniaZDanymiUzytkownika = "";

    liniaZDanymiUzytkownika += MetodyPomocnicze::konwerjsaIntNaString(uzytkownik.pobierzId())+ '|';
    liniaZDanymiUzytkownika += uzytkownik.pobierzLogin() + '|';
    liniaZDanymiUzytkownika += uzytkownik.pobierzHaslo() + '|';

    return liniaZDanymiUzytkownika;
}
vector <Uzytkownik> PlikZUzytkownikami::wczytajUzytkownikowZPliku()
{
   Uzytkownik uzytkownik;
   vector <Uzytkownik> uzytkownicy;
   string daneJednegoUzytkownikaOddzielonePionowymiKreskami;

    plikTekstowy.open(nazwaPlikuZUzytkownikami.c_str(), ios::in);

    if (plikTekstowy.good() == true)
    {
        while (getline(plikTekstowy, daneJednegoUzytkownikaOddzielonePionowymiKreskami))
        {
            uzytkownik = pobierzDaneUzytkownika(daneJednegoUzytkownikaOddzielonePionowymiKreskami);
            uzytkownicy.push_back(uzytkownik);
        }

    }

    plikTekstowy.close();
    return uzytkownicy;
}
Uzytkownik PlikZUzytkownikami::pobierzDaneUzytkownika(string daneJednegoUzytkownikaOddzielonePionowymiKreskami)
{
    Uzytkownik uzytkownik;
    string pojedynczaDanaUzytkownika;
    int numerPojedynczejDanejUzytkownika=1;
    for (int pozycjaZnaku = 0; pozycjaZnaku < daneJednegoUzytkownikaOddzielonePionowymiKreskami.length(); pozycjaZnaku++)
    {
        if (daneJednegoUzytkownikaOddzielonePionowymiKreskami[pozycjaZnaku] != '|')
        {
            pojedynczaDanaUzytkownika += daneJednegoUzytkownikaOddzielonePionowymiKreskami[pozycjaZnaku];
            cout<< pojedynczaDanaUzytkownika<<endl;
        }
        else
        {
            switch(numerPojedynczejDanejUzytkownika)
            { //cout<<"test"<<endl;
            case 1:
                {/*uzytkownik.id = atoi(pojedynczaDanaUzytkownika.c_str());
                uzytkownik.ustawId(atoi(pojedynczaDanaUzytkownika.c_str()));*/
                //int id;
                uzytkownik.ustawId (atoi(pojedynczaDanaUzytkownika.c_str()));
                //uzytkownik.ustawId(id);
                // cout<<"dziala jakos"<<endl;
                break;
                }
            case 2:
               {
                //uzytkownik.login = pojedynczaDanaUzytkownika;
                //string login;
                //login = pojedynczaDanaUzytkownika;
                uzytkownik.ustawLogin(pojedynczaDanaUzytkownika);
                //cout<<"dziala jakos"<<endl;
                break;
                }
            case 3:
                {/*uzytkownik.haslo = pojedynczaDanaUzytkownika;
                uzytkownik.ustawHaslo(pojedynczaDanaUzytkownika);*/
                //string haslo;
                //haslo = pojedynczaDanaUzytkownika;
                uzytkownik.ustawHaslo(pojedynczaDanaUzytkownika);
                //cout<<"dziala jakos"<<endl;
                break;
                }
            }
            pojedynczaDanaUzytkownika = "";
            numerPojedynczejDanejUzytkownika++;

        }
    }
    return uzytkownik;
}

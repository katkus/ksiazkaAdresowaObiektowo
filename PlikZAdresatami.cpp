#include "PlikZAdresatami.h"

/*PlikZUzytkownikami::PlikZUzytkownikami()
{
    nazwaPlikuZUzytkownikami = "Uzytkownicy.txt";
    //daneJednegoUzytkownikaOddzielonePionowymiKreskami = "";
    //string pojedynczaDanaUzytkownika = "";
    //int numerPojedynczejDanejUzytkownika = 1;
    //string liniaZDanymiUzytkownika = "";Co bedzie z calym konstruktorem??
}*/
/*void PlikZUzytkownikami::dopiszUzytkownikaDoPliku(Uzytkownik uzytkownik)
{
    fstream plikTekstowy;
    string liniaZDanymiUzytkownika = "";
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
    fstream plikTekstowy;
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
}*/
vector <Adresat> PlikZAdresatami::wczytajAdresatowZPliku()
{
   Adresat adresat;
   vector <Adresat> adresaci;
   fstream plikTekstowy;
   string daneJednegoAdresataOddzielonePionowymiKreskami="";

    plikTekstowy.open(nazwaPlikuZAdresatami.c_str(), ios::in);

    if (plikTekstowy.good() == true)
    {
        while (getline(plikTekstowy, daneJednegoAdresataOddzielonePionowymiKreskami))
        {
            adresat = pobierzDaneAdresata(daneJednegoAdresataOddzielonePionowymiKreskami);
            adresaci.push_back(adresat);
        }

    }
    plikTekstowy.close();
    return adresaci;
}
Adresat PlikZAdresatami::pobierzDaneAdresata(string daneJednegoAdresataOddzielonePionowymiKreskami)
{
    Adresat adresat;
    string pojedynczaDanaAdresata="";
    int numerPojedynczejDanejAdresata=1;
    for (int pozycjaZnaku = 0; pozycjaZnaku < daneJednegoAdresataOddzielonePionowymiKreskami.length(); pozycjaZnaku++)
    {
        if (daneJednegoAdresataOddzielonePionowymiKreskami[pozycjaZnaku] != '|')
        {
            pojedynczaDanaAdresata += daneJednegoAdresataOddzielonePionowymiKreskami[pozycjaZnaku];
            cout<< pojedynczaDanaAdresata<<endl;
        }
        else
        {
            /*switch(numerPojedynczejDanejAdresata)
            {//inne cialo
            case 1:
                {
                adresat.ustawId (atoi(pojedynczaDanaAdresata.c_str()));
                break;
                }
            case 2:
               {
                adresat.ustawLogin(pojedynczaDanaAdresata);
                break;
                }
            case 3:
                {
                adresat.ustawHaslo(pojedynczaDanaAdresata);
                break;
                }
            }
            pojedynczaDanaAdresata = "";
            numerPojedynczejDanejAdresata++;*/

        }
    }
    return adresat;
}

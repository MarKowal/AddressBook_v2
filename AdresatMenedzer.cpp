#include "AdresatMenedzer.h"


AdresatMenedzer::AdresatMenedzer(int idZalogowanegoUzytkownika, string nazwaPlikuZAdresatami)
: plikZAdresatami(nazwaPlikuZAdresatami)
{
    adresaci = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(idZalogowanegoUzytkownika);
}

void AdresatMenedzer::dodajAdresata(int idZalogowanegoUzytkownika)
{
    Adresat adresat;

    cout << " >>> DODAWANIE NOWEGO ADRESATA <<<" << endl << endl;
    adresat = podajDaneNowegoAdresata(idZalogowanegoUzytkownika);

    adresaci.push_back(adresat);
    plikZAdresatami.dopiszAdresataDoPliku(adresat);
    cout<<"Adresat zapisany"<<endl;
}

Adresat AdresatMenedzer::podajDaneNowegoAdresata(int idZalogowanegoUzytkownika)
{
    Adresat adresat;
    string imie, nazwisko, numerTelefonu, email, adres;

    cout << "Podaj imie: ";
    imie = MetodyPomocnicze::wczytajLinie();
    imie = MetodyPomocnicze::zamienPierwszaLitereNaDuzaAPozostaleNaMale(imie);

    cout << "Podaj nazwisko: ";
    nazwisko = MetodyPomocnicze::wczytajLinie();
    nazwisko = MetodyPomocnicze::zamienPierwszaLitereNaDuzaAPozostaleNaMale(nazwisko);

    cout << "Podaj numer telefonu: ";
    numerTelefonu = MetodyPomocnicze::wczytajLinie();

    cout << "Podaj email: ";
    email = MetodyPomocnicze::wczytajLinie();

    cout << "Podaj adres: ";
    adres = MetodyPomocnicze::wczytajLinie();

    adresat.ustawIdAdresata(plikZAdresatami.pobierzIdOstatniegoAdresata()+1);
    adresat.ustawIdUzytkownika(idZalogowanegoUzytkownika);
    adresat.ustawImie(imie);
    adresat.ustawNazwisko(nazwisko);
    adresat.ustawNumerTelefonu(numerTelefonu);
    adresat.ustawEmail(email);
    adresat.ustawAdres(adres);

    return adresat;
}

void AdresatMenedzer::wyswietlAdresatowZalogowanegoUzytkownika(int idZalogowanegoUzytkownika)
{
    Adresat adresat;
    if (!adresaci.empty())
    {
        cout << "             >>> ADRESACI <<<" << endl;
        cout << "-----------------------------------------------" << endl;
        for (vector <Adresat> :: iterator itr = adresaci.begin(); itr != adresaci.end(); itr++)
        {
                wyswietlDaneAdresata(*itr, idZalogowanegoUzytkownika);
        }
        cout << endl;
    }
    else
    {
        cout << endl << "Ksiazka adresowa jest pusta." << endl << endl;
    }
    system("pause");
}

void AdresatMenedzer::wyswietlDaneAdresata(Adresat adresat, int idZalogowanegoUzytkownika)
{
    if (adresat.pobierzIdUzytkownika() == idZalogowanegoUzytkownika)
    {
        cout <<endl<< "Id:                 " << adresat.pobierzIdAdresata() << endl;
        cout << "Imie:               " << adresat.pobierzImie() << endl;
        cout << "Nazwisko:           " << adresat.pobierzNazwisko() << endl;
        cout << "Numer telefonu:     " << adresat.pobierzNumerTelefonu() << endl;
        cout << "Email:              " << adresat.pobierzEmail() << endl;
        cout << "Adres:              " << adresat.pobierzAdres() << endl;
    }
}


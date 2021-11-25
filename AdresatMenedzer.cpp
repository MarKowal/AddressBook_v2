#include "AdresatMenedzer.h"

AdresatMenedzer::AdresatMenedzer()
{
    idOstatniegoAdresata=0;
}

void AdresatMenedzer::ustawIdOstatniegoAdresata(int noweIdOstatniegoAdresata)
{
    idOstatniegoAdresata=noweIdOstatniegoAdresata;
}

int AdresatMenedzer::wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika)
{
    PlikZAdresatami plikZAdresatami;
    idOstatniegoAdresata = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(idZalogowanegoUzytkownika, adresaci);
}

int AdresatMenedzer::dodajAdresata(int idZalogowanegoUzytkownika)
{
    Adresat adresat;
    PlikZAdresatami plikZAdresatami;

    //system("cls");
    cout << " >>> DODAWANIE NOWEGO ADRESATA <<<" << endl << endl;
    adresat = podajDaneNowegoAdresata(idZalogowanegoUzytkownika);

    adresaci.push_back(adresat);
    plikZAdresatami.dopiszAdresataDoPliku(adresat);
    cout<<"Adresat zapisany"<<endl;

    return idOstatniegoAdresata;
}

Adresat AdresatMenedzer::podajDaneNowegoAdresata(int idZalogowanegoUzytkownika)
{
    Adresat adresat;

    adresat.ustawIdAdresata(++idOstatniegoAdresata);
    adresat.ustawIdUzytkownika(idZalogowanegoUzytkownika);

    cout << "Podaj imie: ";
    adresat.ustawImie(wczytajLinie());
    adresat.ustawImie(zamienPierwszaLitereNaDuzaAPozostaleNaMale(adresat.pobierzImie()));

    cout << "Podaj nazwisko: ";
    adresat.ustawNazwisko(wczytajLinie());
    adresat.ustawNazwisko(zamienPierwszaLitereNaDuzaAPozostaleNaMale(adresat.pobierzNazwisko()));

    cout << "Podaj numer telefonu: ";
    adresat.ustawNumerTelefonu(wczytajLinie());

    cout << "Podaj email: ";
    adresat.ustawEmail(wczytajLinie());

    cout << "Podaj adres: ";
    adresat.ustawAdres(wczytajLinie());

    return adresat;
}

string AdresatMenedzer::wczytajLinie()
{
    string wejscie = "";
    getline(cin, wejscie);
    return wejscie;
}

string AdresatMenedzer::zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst)
{
    if (!tekst.empty())
    {
        transform(tekst.begin(), tekst.end(), tekst.begin(), ::tolower);
        tekst[0] = toupper(tekst[0]);
    }
    return tekst;
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


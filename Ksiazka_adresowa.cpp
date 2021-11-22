#include "Ksiazka_adresowa.h"

void Ksiazka_adresowa::rejestracjaUzytkownika()
{
    uzytkownikMenedzer.rejestracjaUzytkownika();
}

void Ksiazka_adresowa::wypiszWszystkichUzytkownikow()
{
    uzytkownikMenedzer.wypiszWszystkichUzytkownikow();
}

int Ksiazka_adresowa::logowanieUzytkownika()
{
    uzytkownikMenedzer.logowanieUzytkownika();
}

void Ksiazka_adresowa::zmianaHaslaZalogowanegoUzytkownika()
{
    uzytkownikMenedzer.zmianaHaslaZalogowanegoUzytkownika();
}

int Ksiazka_adresowa::wylogowanieUzytkownika()
{
    uzytkownikMenedzer.wylogowanieUzytkownika();
}

int Ksiazka_adresowa::dodajAdresata()
{
    cout<<"uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika= "<<uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika()<<endl;
    adresatMenedzer.dodajAdresata(uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika());
}

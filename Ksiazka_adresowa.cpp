#include "Ksiazka_adresowa.h"

void Ksiazka_adresowa::rejestracjaUzytkownika()
{
    uzytkownikMenedzer.rejestracjaUzytkownika();
}

void Ksiazka_adresowa::wypiszWszystkichUzytkownikow()
{
    uzytkownikMenedzer.wypiszWszystkichUzytkownikow();
}

void Ksiazka_adresowa::logowanieUzytkownika()
{
    uzytkownikMenedzer.logowanieUzytkownika();
    adresatMenedzer.wczytajAdresatowZalogowanegoUzytkownikaZPliku(uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika());
}

void Ksiazka_adresowa::zmianaHaslaZalogowanegoUzytkownika()
{
    uzytkownikMenedzer.zmianaHaslaZalogowanegoUzytkownika();
}

void Ksiazka_adresowa::wylogowanieUzytkownika()
{
    uzytkownikMenedzer.wylogowanieUzytkownika();
}

void Ksiazka_adresowa::dodajAdresata()
{
    adresatMenedzer.dodajAdresata(uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika());
}

void Ksiazka_adresowa::wyswietlAdresatowZalogowanegoUzytkownika()
{
    adresatMenedzer.wyswietlAdresatowZalogowanegoUzytkownika(uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika());

}

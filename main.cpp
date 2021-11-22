#include <iostream>

#include "Ksiazka_adresowa.h"

using namespace std;

int main()
{
    Ksiazka_adresowa ksiazkaAdresowa("Uzytkownicy_wersja2.txt");

    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
    ksiazkaAdresowa.logowanieUzytkownika();
    ksiazkaAdresowa.dodajAdresata();
    ksiazkaAdresowa.dodajAdresata();
    ksiazkaAdresowa.wylogowanieUzytkownika();
    ksiazkaAdresowa.logowanieUzytkownika();
    ksiazkaAdresowa.dodajAdresata();
    ksiazkaAdresowa.dodajAdresata();



    return 0;
}

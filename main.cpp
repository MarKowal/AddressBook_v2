#include <iostream>

#include "Ksiazka_adresowa.h"

using namespace std;

int main()
{
    Ksiazka_adresowa ksiazkaAdresowa("Uzytkownicy_wersja2.txt");
    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
    ksiazkaAdresowa.logowanieUzytkownika();
    ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();
    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();


    return 0;
}

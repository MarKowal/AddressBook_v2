#include <iostream>

#include "Ksiazka_adresowa.h"

using namespace std;

int main()
{
    Ksiazka_adresowa ksiazkaAdresowa("Uzytkownicy_wersja2.txt");
    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
    //ksiazkaAdresowa.rejestracjaUzytkownika();
    //ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
    ksiazkaAdresowa.logowanieUzytkownika();

    return 0;
}

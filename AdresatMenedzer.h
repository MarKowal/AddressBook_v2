#ifndef ADRESATMENEDZER_H
#define ADRESATMENEDZER_H

#include <iostream>
#include <vector>
#include <string>

#include "Adresat.h"
#include "PlikZAdresatami.h"


using namespace std;

class AdresatMenedzer
{
    vector <Adresat> adresaci;
    PlikZAdresatami plikZAdresatami;

    Adresat podajDaneNowegoAdresata(int idZalogowanegoUzytkownika);
    void wyswietlDaneAdresata(Adresat adresat, int idZalogowanegoUzytkownika);
    int podajIdWybranegoAdresata();


public:
    AdresatMenedzer(int idZalogowanegoUzytkownika, string nazwaPlikuZAdresatami);
    void dodajAdresata(int idZalogowanegoUzytkownika);
    void wyswietlAdresatowZalogowanegoUzytkownika(int idZalogowanegoUzytkownika);
    void wyszukajAdresatowPoImieniu(int idZalogowanegoUzytkownika);
    void wyswietlIloscWyszukanychAdresatow(int iloscAdresatow);
    void wyszukajAdresatowPoNazwisku(int idZalogowanegoUzytkownika);
    int usunAdresata(int idZalogowanegoUzytkownika);

};

#endif


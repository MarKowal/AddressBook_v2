#ifndef ADRESATMENEDZER_H
#define ADRESATMENEDZER_H

#include <iostream>
#include <vector>
#include <string>

#include <algorithm>
#include <cctype>
#include <string>
#include <functional>


#include "Adresat.h"
#include "UzytkownikMenedzer.h"
#include "PlikZAdresatami.h"


using namespace std;

class AdresatMenedzer
{
    int idOstatniegoAdresata;
    vector <Adresat> adresaci;

    Adresat podajDaneNowegoAdresata(int idZalogowanegoUzytkownika);
    string wczytajLinie();
    string zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst);
    void wyswietlDaneAdresata(Adresat adresat, int idZalogowanegoUzytkownika);


public:
    AdresatMenedzer();
    void ustawIdOstatniegoAdresata(int noweIdOstatniegoAdresata);

    int wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
    int dodajAdresata(int idZalogowanegoUzytkownika);
    void wyswietlAdresatowZalogowanegoUzytkownika(int idZalogowanegoUzytkownika);
};

#endif


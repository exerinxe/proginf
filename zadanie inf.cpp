#include <iostream>
#include <string>
 
using namespace std;
 
struct Ksiazka {
    string tytul;
    string autor;
    int rok;
    string wydawnictwo;
    double cena;
};
 
void wyszukajKsiazkiPoRoku(Ksiazka* ksiazki, int liczbaKsiazek, int* rok) {
    cout << "Znalezione ksiazki:\n";
    for (int i = 0; i < liczbaKsiazek; ++i) {
        if (ksiazki[i].rok > *rok) {
            cout << "Tytul:" << ksiazki[i].tytul << "    Autor:" << ksiazki[i].autor << "    Rok:" << ksiazki[i].rok << "    Wydawnictwo:" << ksiazki[i].wydawnictwo << "    Cena:" << ksiazki[i].cena << endl;
        }
    }
}
 
void wyszukajKsiazkiPoCenie(Ksiazka* ksiazki, int liczbaKsiazek, double* cena) {
    cout << "Znalezione ksiazki:\n";
    for (int i = 0; i < liczbaKsiazek; ++i) {
        if (ksiazki[i].cena > *cena) {
            cout << "Tytul:" << ksiazki[i].tytul << "    Autor:" << ksiazki[i].autor << "    Rok:" << ksiazki[i].rok << "    Wydawnictwo:" << ksiazki[i].wydawnictwo << "    Cena:" << ksiazki[i].cena << endl;
        }
    }
}
 
void wyszukajKsiazkiPoWydawnictwie(Ksiazka* ksiazki, int liczbaKsiazek, string* wydawnictwo) {
    cout << "Znalezione ksiazki:\n";
    for (int i = 0; i < liczbaKsiazek; ++i) {
        if (ksiazki[i].wydawnictwo == *wydawnictwo) {
            cout << "Tytul:" << ksiazki[i].tytul << "    Autor:" << ksiazki[i].autor << "    Rok:" << ksiazki[i].rok << "    Wydawnictwo:" << ksiazki[i].wydawnictwo << "    Cena:" << ksiazki[i].cena << endl;
        }
    }
}
 
int main() {
    Ksiazka ksiegarnia_ksiazki[7] = {
        { "Tytul1", "autor1", 1925, "Helion1", 23.54 },
        { "Tytul2", "autor2", 1926, "Helion2", 24.54 },
        { "Tytul3", "autor1", 1927, "Helion3", 25.54 },
        { "Tytul4", "autor2", 1928, "Helion1", 26.54 },
        { "Tytul5", "autor1", 1921, "Helion2", 27.54 },
        { "Tytul6", "autor2", 1930, "Helion3", 28.54 },
        { "Tytul7", "autor1", 1931, "Helion1", 29.54 }
    };
 
    int opcja;
    do {
        cout << "Witaj w ksiegarnii\n";
        cout << "Po jakiej kategorii chcialbys wyszukac ksiazke:\n";
        cout << "1. Rok wydania\n";
        cout << "2. Cena\n";
        cout << "3. Wydawnictwo\n";
        cout << "0. Wyjscie\n";
        cin >> opcja;
 
        switch (opcja) {
            case 1: {
                int rok;
                cout << "Podaj od jakiego roku chcesz zobaczyc ksiazki: ";
                cin >> rok;
                wyszukajKsiazkiPoRoku(ksiegarnia_ksiazki, 7, &rok);
                break;
            }
            case 2: {
                double cena;
                cout << "Podaj cene, od ktorej chcesz zobaczyc ksiazki: ";
                cin >> cena;
                wyszukajKsiazkiPoCenie(ksiegarnia_ksiazki, 7, &cena);
                break;
            }
            case 3: {
                string wydawnictwo;
                cout << "Podaj nazwe wydawnictwa, ktorego ksiazki chcesz zobaczyc: ";
                cin >> wydawnictwo;
                wyszukajKsiazkiPoWydawnictwie(ksiegarnia_ksiazki, 7, &wydawnictwo);
                break;
            }
            case 0:
                cout << "Dziekujemy za skorzystanie z ksiegarni.\n";
                break;
            default:
                cout << "Niepoprawny wybor. Sprobuj ponownie.\n";
                break;
        }
    } while (opcja != 0);
 
    return 0;
}
#include <iostream>

using namespace std;


void zwieksz_liczbe (int *liczba)
{
    *liczba= 15;
}

int main()
{
    int numerek = 15;
    int *wsk = &numerek;
    
    zwieksz_liczbe(wsk); //przekazujemy wskaźnik (bez operatorów)
    
    cout << numerek << endl;
    
    zwieksz_liczbe(&numerek); //przekazujemy bezpośrednio adres zmiennej (operator &)
    
    cout << numerek << endl;
    
    return 0;
}
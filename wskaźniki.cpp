#include <iostream>

using namespace std;


void zwieksz_liczbe (int *liczba)
{
    *liczba= 15;
}

int main()
{
    int numerek = 5;
    int *wsk = &numerek;
    
    zwieksz_liczbe(wsk);
    
    cout << numerek << endl;
    
    zwieksz_liczbe(&numerek); 
    
    cout << numerek << endl;
    
    return 0;
}
#include <iostream>

using namespace std;

int main()
{
    int tab[25] ={2, 3, 5, 7, 11, 2, 3, 5, 7, 11, 31, 37, 41, 43, 47, 2, 3, 5, 7, 11, 31, 37, 41, 43, 47};
   
    short szukana;
    short index = 0;

    cout << "Jaka liczbe poszukujesz: ";
    cin >> szukana;

  

    cout << "Poszukiwana liczba znajduje sie na pozycji: " << endl;
    for(int i =0; i <= 25; i++){
    	if (tab[i] == szukana){
		
        cout << i << ", ";
    }
}
}
#include <iostream>
using namespace std;

int main()
{
	int wybor;
	float netto, brutto;
	cout << "ktora kwote chcesz obliczyc? \n 1. brutto \n 2. netto" << endl;
	cin >> wybor;
	
	switch(wybor)
	{
		case 1:
			cout << "podaj kwote netto: ";
			cin >> netto;
			cout << "brutto: " <<  brutto(netto) << " zl" << endl;
			break;
		case 2:
		    cout << "podaj kwote brutto: ";
			cin >> brutto;
			cout << "netto: " << netto(brutto) << " zl" << endl;
			break;	
	}
}
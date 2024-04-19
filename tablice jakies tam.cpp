#include <iostream>
using namespace std;

int main()
{
	char tablica[200];
	cout << "podaj imie i nazwisko: ";
	cin.getline(tablica,200);  
	cout << "twoje dane osobowe: "<< tablica << endl;
	system("pause");
	return 0;

	string s1 = "C";
	char cn[] = "string";
	string s = s1 + '-' + cn;
	cout << s << endl;
	
	cout << "Length string: " << s1.length() << endl;
	cout << "Length tablica: " << sizeof(cn) << endl;
 }

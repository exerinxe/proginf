#include <iostream>
using namespace std;

float Pole(float a){
    return a*a;
}
double Pole(double r){
    return 3.14*r*r;
}
float Pole(float a,float b){
    return a*b;
}

int main()
{
    float a,b;
    double r;
    char opcja;

    cout<<"Wybierz opcje: "<<endl;
    cout<<"1 - pole kwadratu "<<endl;
    cout<<"2 - pole prostokata "<<endl;
    cout<<"3 - pole kola "<<endl;

    cin>>opcja;

    switch(opcja)
    {
    case '1':
        cout<<"Podaj dlugosc boku: "; cin>>a;
        cout<<"Pole kwadratu wynosi "<<Pole(a)<<endl;
        break;
    case '2':
        cout<<"Podaj dlugosc boku a: "; cin>>a;
        cout<<"Podaj dlugosc boku b: "; cin>>b;
        cout<<"Pole prostokata wynosi "<<Pole(a,b)<<endl;
        break;
    case '3':
        cout<<"Podaj dlugosc promienia: "; cin>>r;
        cout<<"Pole kola wynosi "<<Pole(r)<<endl;
        break;
    default: cout<<"Wybrales nieprawidlowa opcje!"<<endl;
    }

    return 0;
}

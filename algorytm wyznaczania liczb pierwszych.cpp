
#include <iostream>

using namespace std;

int main(){

	int n;

	cout << "Ile liczb pierwszych wyswietlic?: ";

	cin >> n;

	int lp;

	int p;

	int d;

	bool y = true;

	lp = 0;

	p = 2;

	while(lp < n){

		y = true;

		for(d = 2; d < (p-1); d++){

			if(p % d == 0){

				y = false;		

			}

		}

		if(y == true){

		cout << p << ", ";

		lp = lp + 1;

		}

		p = p + 1;

	}

	return 0;	

}
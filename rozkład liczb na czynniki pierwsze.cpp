#include <iostream>>
using namespace std;

int main() {
	long n;
	cout << "podaj liczbe:";
	cin >> n;
	
	if (n<2) {
		cout << "liczba musi byc wieksza od 1" << endl;
		return 1;
	}
	
	long k = 2;
	while (n > 1) {
		while (n % k == 0) {
			cout << k << " ";
			n /= k;
		}
		k++;
	}
	cout << endl;
	return 0;
}
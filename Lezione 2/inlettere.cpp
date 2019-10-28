#include <iostream>

using namespace std;

int main() {
	int numero;
	cout << "inserisci un numero: ";
	cin >> numero;

	if (numero >= 0 and numero <= 9) {
		cout << "ok" << endl;
	} else {
		cout << "not ok" << endl;
	}
}
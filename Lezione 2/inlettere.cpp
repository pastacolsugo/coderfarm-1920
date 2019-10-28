#include <iostream>

using namespace std;

int main() {
	int numero;
	cout << "inserisci un numero: ";
	cin >> numero;

	if (numero >= 0 and numero <= 9) {
		if (numero == 0) {
			cout << "zero";
		} else if (numero == 1) {
			cout << "uno";
		} else if (numero == 2) {
			cout << "due";
		} else if (numero == 3) {
			cout << "tre";
		} else if (numero == 4) {
			cout << "quattro";
		} else if (numero == 5) {
			cout << "cinque";
		} else if (numero == 6) {
			cout << "sei";
		} else if (numero == 7) {
			cout << "sette";
		} else if (numero == 8) {
			cout << "otto";
		} else {
			cout << "nove";
		}	
		cout << endl;
	} else {
		cout << "Il numero non e' corretto." << endl;
	}
}
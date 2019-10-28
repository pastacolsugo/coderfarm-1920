#include <iostream>

using namespace std;

int main() {
	int ruote;
	cout << "inserisci il numero di ruote: ";
	cin >> ruote;
	if (ruote == 2) {
		cout << "Il veicolo e' una moto";
	} else {
		if (ruote == 4) {
			cout << "Il veicolo e' un auto";
		} else {
			cout << "Il veicolo e' un camion";
		}
	}
}
#include <iostream>

using namespace std;

int main() {
	int lista[8];

	cout << "Inserisci 8 valori: " << endl;

	for (int i = 0; i < 8; i++) {
		cout << i << ") ";
		cin >> lista[i];
	}

	for (int i = 0; i < 8; i++) {
		cout << "lista[" << i << "] = " << lista[i] << endl;
	}
}